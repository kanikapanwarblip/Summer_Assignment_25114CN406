#include <stdio.h>
int reverse = 0;
int reverseNumber(int n) {
    if (n == 0) 
        return reverse;
    
        reverse = reverse * 10 + (n % 10);
        reverseNumber(n / 10);
    }
 int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reversed number = %d", reverseNumber(n));
    return 0;   
 }