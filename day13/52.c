//program to Count even and odd elements

#include <stdio.h>
int main() {
    int arr[10], n, i, even = 0, odd = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) 
            even++;
         else
            odd++;
    }
    printf("Number of even elements is: %d\n", even);
    printf("Number of odd elements is: %d\n", odd);
    return 0;
}
SS