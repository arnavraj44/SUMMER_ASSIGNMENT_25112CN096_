// program to Recursive reverse number

#include <stdio.h>
int reverseNumber(int n, int reversed) {
    if (n == 0) {
        return reversed;
    } else {
        return reverseNumber(n / 10, reversed * 10 + n % 10);
    }
}
int main() {
   int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is %d\n", num, reverseNumber(num, 0));
    return 0;
}

