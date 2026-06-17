#include<stdio.h>
int main() {
    int n, i, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
    flag = 0;
    } else {
     for (i = 2; i < n; i++){
        if (n % i ==0){
            flag = 0;
            break;
        }
      }
    }
 if (flag == 1)
 printf ("%d is a Prime number", n);
 else
 printf (" %d is Not a Prime number", n);

 return 0;
}