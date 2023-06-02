#include <iostream>
using namespace std;


void minHeapify(int array[], int n, int i) {
  int smallest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;
  if (left < n && array[left] < array[smallest]) {
    smallest = left;}

  if (right < n && array[right] < array[smallest]) {
    smallest = right;
  }

  if (smallest != i) {
    swap(array[i], array[smallest]);
    minHeapify(array, n, smallest);
  }
}

void buildMinHeap(int array[], int n) {
  for (int i = (n / 2) - 1; i >= 0; i--) {
    minHeapify(array, n, i);
  }
}

void heapSort(int array[], int n) {
  buildMinHeap(array, n);

  for (int i = n - 1; i > 0; i--) {
    swap(array[0], array[i]);
    minHeapify(array, i, 0);
  }
}

int main() {
  int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  int n = sizeof(array) / sizeof(array[0]);

  heapSort(array, n);

  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }

  cout << endl;

  return 0;
}
