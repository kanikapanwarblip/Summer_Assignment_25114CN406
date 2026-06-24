#include <stdio.h>
int isArmstrong(int n) {
    int original = n, sum = 0, digit;

    while (n > 0) {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n /= 10;
    }

    return (original == sum);
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}