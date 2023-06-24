#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++) {
		cout << arr[i] << " ";
		cout << endl;
	}
}

int main(){
int arr[] = { 64, 25, 12, 22, 11 };
int size= 5;
for(int i=1; i<size; i++){
    int key=arr[i],j=(i-1);
    while(j>=0&& arr[j]>key){
        arr[j+1]=arr[j];
        j--;
        cout<<"j-"<<j;
        break;
    }
    arr[j+1]=key;
}
printArray(arr,5);

return 0;
}