#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Return the index where the key is found
        }
    }
    return -1;  // Return -1 if key is not found
}

int main() {
    int arr[] = {12, 45, 67, 89, 34, 56, 78};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
    int key = 56;  // Element to search for

    // Perform linear search
    int result = linearSearch(arr, n, key);

    // Display the result
    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}

