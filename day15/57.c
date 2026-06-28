//program to Reverse array

#include <stdio.h>  
int main() {
    int n, i;  
    printf("Enter the size of array: ");  
    scanf("%d", &n);  
    int arr[n];  
    printf("Enter the elements of array: ");  
    for(i = 0; i < n; i++) {  
        scanf("%d", &arr[i]);  
    }  
    printf("Elements of original array: ");  
    for(i = 0; i < n; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  
    printf("Elements of array in reverse order: ");  
    for(i = n - 1; i >= 0; i--) {  
        printf("%d ", arr[i]);  
    }  
    return 0;  
}