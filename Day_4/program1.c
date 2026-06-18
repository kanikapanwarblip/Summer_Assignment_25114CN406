#include <stdio.h>
int main() {
    int a, b, c, n;
    printf("\n Enter the maximum number :");
    scanf("%d", &n);
    a = 0;
    b = 1;
    c = a + b;
    printf("\n%d %d", a, b);
    while (c <= n) {
        printf(" %d", c);
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}