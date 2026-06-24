#include <stdio.h>
int isPallindrome(int n) {
    int original = n, reversed = 0, digit;

    while (n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return (original == reversed);
}
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isPallindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }
    return 0;
}   