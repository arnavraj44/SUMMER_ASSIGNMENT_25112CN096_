/* program to Print repeated character pattern
A 
BB 
CCC 
DDDD 
EEEEE  */

#include <stdio.h>
int main() {
    int i, j, n;
    char ch ;
    ch = 'A';
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n");
        ch++;
    }
    return 0;
}
