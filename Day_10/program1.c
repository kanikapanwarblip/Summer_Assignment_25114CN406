#include <stdio.h>
int main() {
    int n = 5, i, j;
    for (i = 1; i <= n; i++) { //print spaces
        for (j = 1; j<=n - i; j++) {
                printf(" ");
        }
           for (j = 1; j<=2*i-1; j++) { //print stars 
                printf(" *"); 
        }
        printf("\n");
    }
    return 0;
}