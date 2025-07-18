#include <stdio.h>

// Function to find the maximum element in the array
int findmax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // make sure your compiler supports VLAs

    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Maximum = %d\n", findmax(arr, n));

    return 0;
}

	
	
	