 //program to Write function to find maximum

 #include <stdio.h>
int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}   
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Maximum of %d and %d is %d\n", a, b, max(a, b));
    return 0;
}