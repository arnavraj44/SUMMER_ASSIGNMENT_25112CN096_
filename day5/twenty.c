#include <stdio.h>
int largestPrimeFactor(long long n) {
int maxPrime = -1;
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2; }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i; }
    }
    if (n > 2)
        maxPrime = n;
    return maxPrime; }

    int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);
    int result = largestPrimeFactor(num);
    printf("Largest prime factor of %lld is %d\n", num, result);
    return 0;
    }
