#include <iostream>
#include <stack>
using namespace std;

class Queue {
private:
    stack<int> stack1;  
    stack<int> stack2;  

public:
    void enqueue(int value) {
        stack1.push(value);
    }

int dequeue() {
        if (stack1.empty() && stack2.empty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }

        if (stack2.empty()) {
            while (!stack1.empty()) {
                int top = stack1.top();
                stack1.pop();
                stack2.push(top);
            }
        }

        int front = stack2.top();
        stack2.pop();
        return front;
    }
    bool isEmpty() {
        return stack1.empty() && stack2.empty();
    }
};

int main() {
    Queue queue;

    // Enqueue elements
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    // Dequeue elements
    cout << queue.dequeue() << endl; 
    cout << queue.dequeue() << endl; 

    // Enqueue more elements
    queue.enqueue(40);
    queue.enqueue(50);

    // Dequeue remaining elements
    cout << queue.dequeue() << endl; 
    cout << queue.dequeue() << endl; 
    cout << queue.dequeue() << endl;  

    // Check if the queue is empty
    cout<< queue.isEmpty() << endl; 

    return 0;
}
