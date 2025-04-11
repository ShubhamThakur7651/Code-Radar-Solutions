// Your code here...
#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array to the right by K positions
void rotate(int arr[], int n, int k) {
    k = k % n; // Handle cases where k > n

    // Reverse the entire array
    reverse(arr, 0, n - 1);
    // Reverse the first K elements
    reverse(arr, 0, k - 1);
    // Reverse the remaining elements
    reverse(arr, k, n - 1);
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n, k;
    
    // User input for array size and rotation count
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    // Rotate array in-place
    rotate(arr, n, k);

    // Print the rotated array
    printf("Rotated array: ");
    printArray(arr, n);

    return 0;
}