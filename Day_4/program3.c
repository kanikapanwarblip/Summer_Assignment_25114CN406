#include <stdio.h>
int main () {
int i, x, sum=0 ;
printf("Enter a number to check: ");
scanf("%d", &i);
x = i;
while (i > 0) {
    sum = sum + (i % 10) * (i % 10) * (i % 10);
    i = i / 10;
}
if (sum == x) {
    printf("The number is an Armstrong number.");
} else {
    printf("The number is not an Armstrong number.");
}
return 0;
}