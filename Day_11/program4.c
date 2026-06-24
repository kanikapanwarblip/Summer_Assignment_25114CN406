#include <stdio.h>
long long factorial(int n) {
    long long fact = 1;
    int i;

    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
     }
int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
        printf("Factorial = %lld\n", factorial(num));
    
    return 0;
}