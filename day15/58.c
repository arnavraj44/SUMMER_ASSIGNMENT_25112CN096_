//program to Rotate array left

#include <stdio.h>
int main() {
    int n, d, i, j;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate left: ");
    scanf("%d", &d);
    d = d % n; // Handle cases where d is greater than n
    printf("Elements of array after left rotation: ");
    for(i = d; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for(i = 0; i < d; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}