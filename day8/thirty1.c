/* program to Print character triangle
A 
AB 
ABC 
ABCD 
ABCDE */

#include <stdio.h>
int main() {
    char ch;
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        ch = 'A'; 
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++; 
        }
        printf("\n"); }
    return 0;
}



