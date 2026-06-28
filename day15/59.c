 //program to Rotate array right

#include <stdio.h>
void rotateArray(int arr[], int n, int k) {
    k = k % n; // In case k is greater than n
    int temp[k];
    
    // Store the last k elements in a temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    
    // Shift the remaining elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    
    // Copy the temporary array back to the original array
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}   
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // Number of positions to rotate
    
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    rotateArray(arr, n, k);
    
    printf("\nRotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}