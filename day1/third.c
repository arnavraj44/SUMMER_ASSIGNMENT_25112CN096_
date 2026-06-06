#include <stdio.h>
int factorial(int n)
{
    
    // Calculating factorial of number
    int ans = 1, i;
    for (i = 2; i <= n; i++)
        ans *= i;
    return ans;
}

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("%d\n", factorial(num));
    return 0;
}

