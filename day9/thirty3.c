/* program to Print reverse star pattern. 
***** 
**** 
*** 
** 
*     */

#include <stdio.h>
int main() {
    int i, j, rows;
    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); }
    return 0;
}
