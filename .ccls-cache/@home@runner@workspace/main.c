#include <stdio.h>
#include <stdlib.h>

// Function to find the maximum sum subarray using Kadane's Algorithm
int maxSubarraySum(int arr[], int size) {
    int max_so_far = 0;
    int current_max = 0;

    for (int i = 0; i < size; i++) {
        current_max = current_max + arr[i];
        if (current_max < 0)
            current_max = 0;
        if (max_so_far < current_max)
            max_so_far = current_max;
    }
    return max_so_far;
}

// Function to reverse an array (in-place)
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    // Example usage of maxSubarraySum
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max_sum = maxSubarraySum(arr, size);
    printf("Maximum contiguous subarray sum is %d\n", max_sum);

    // Example usage of reverseArray
    int arr2[] = {1, 2, 3, 4, 5, 6};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Original array: ");
    printArray(arr2, size2);
    reverseArray(arr2, 0, size2 - 1);
    printf("Reversed array: ");
    printArray(arr2, size2);

    return 0;
}