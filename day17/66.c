//program to Union of arrays

#include <stdio.h>
int main() {
    int a[100], b[100], c[200];
    int i, j, k, m, n;
    printf("Enter the number of elements in first array: ");
    scanf("%d", &m);
    printf("Enter the elements of first array: ");
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n);
    printf("Enter the elements of second array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);
    
    // Copying first array to union array
    for (i = 0; i < m; i++)
        c[i] = a[i];
    
    k = m;
    for (i = 0; i < n; i++) {
        int found = 0;
        for (j = 0; j < m; j++) {
            if (b[i] == a[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            c[k++] = b[i];
        }
    }
    
    printf("Union of two arrays is: ");
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);
    
    return 0;
}