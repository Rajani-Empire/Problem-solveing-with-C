#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (arr[middle] == target)
            return middle;

        if (arr[middle] < target)
            left = middle + 1;
      
        else
            right = middle - 1;
    }
   
    return -1;
}


int main() {
    int arr[] = {2, 4, 7, 10, 13, 18, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 13;
    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1)
        printf("Element %d is present at index %d.\n", target, result);
    else
        printf("Element %d is not present in the array.\n", target);
    return 0;
}
