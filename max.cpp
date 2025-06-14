#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0];  // Assume the first element is the max initially
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if a bigger value is found
        }
    }
    return max;  // Return the largest number
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input the array elements
    }

    printf("Maximum = %d\n", findMax(arr, n));  // Display the max
    return 0;
}