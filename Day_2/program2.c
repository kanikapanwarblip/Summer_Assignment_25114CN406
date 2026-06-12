#include <stdio.h>
int main () {
     int num , reverse=0, digit ;
     printf("Enter a number:");
     scanf("%d", &num);
     while(num != 0) {
         digit = num % 10;
         reverse = reverse * 10 + digit;
         num /= 10;
     }
     printf("Reverse of the number is: %d", reverse);
     return 0;
 }