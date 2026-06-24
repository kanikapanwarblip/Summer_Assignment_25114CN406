#include <stdio.h>
void fibonnaci(int n) {
    int a = 0, b = 1, c, i;

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
int main () {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    fibonnaci(num);
    return 0;
}