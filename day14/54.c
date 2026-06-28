// program to Frequency of an element
#include <stdio.h>
int main() {
    int arr[10], n, i, key, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element whose frequency is to be found: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    printf("Frequency of %d is: %d\n", key, count);
    return 0;
}