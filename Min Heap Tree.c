//To implement a program in c for Min-Heap Tree.

#include <stdio.h>
// Function to heapify a subtree rooted with node i which is an
index in arr[]
void minHeapify(int arr[], int n, int i) {
 int smallest = i; // Initialize smallest as root
 int left = 2 * i + 1; // left child
 int right = 2 * i + 2; // right child
 // If left child is smaller than root
 if (left < n && arr[left] < arr[smallest])
 smallest = left;
 // If right child is smaller than smallest so far
 if (right < n && arr[right] < arr[smallest])
 smallest = right;
 // If smallest is not root
 if (smallest != i) {
 // Swap the found smallest element with the root
 int temp = arr[i];
 arr[i] = arr[smallest];
 arr[smallest] = temp;
 // Recursively heapify the affected sub-tree
 minHeapify(arr, n, smallest);
 }
}
// Function to build a min heap from an array
void buildMinHeap(int arr[], int n) {
	// Start from the last non-leaf node and heapify all nodes in
reverse order
 for (int i = n / 2 - 1; i >= 0; i--)
 minHeapify(arr, n, i);
}
// Function to print an array
void printArray(int arr[], int n) {
 for (int i = 0; i < n; ++i)
 printf("%d ", arr[i]);
 printf("\n");
}
// Test the heap construction function
int main() {
 // Test with a random array
 int randomArray[] = {4, 10, 3, 5, 15};
 int n1 = sizeof(randomArray) / sizeof(randomArray[0]);
 printf("\nOriginal Random Array: ");
 printArray(randomArray, n1);
 // Build heap
 buildMinHeap(randomArray, n1);
 printf("\nMin Heap from Random Array: ");
 printArray(randomArray, n1);
 printf("\n");
 // Test with a sorted array
 int sortedArray[] = {8, 6, 5, 4, 2};
 int n2 = sizeof(sortedArray) / sizeof(sortedArray[0]);
 printf("\nOriginal Sorted Array: ");
 printArray(sortedArray, n2);
 // Build heap
 buildMinHeap(sortedArray, n2);
 printf("\nMin Heap from Sorted Array: ");
 printArray(sortedArray, n2);
 return 0;
}
