#include <stdbool.h>

void bubble_sort(int arr[], int n) {
    // Outer loop for each pass through the array
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        
        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if current element is greater than the next
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        
        // If no swaps occurred in a pass, array is sorted
        if (!swapped) {
            break;
        }
    }
}