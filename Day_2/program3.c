#include <stdio.h>

int main() {
    int n ,count=0;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    while (n > 0) {
        if (n & 1) 
            count++;
        n >>= 1;
    }

    printf(" number of sets bits = %d", count);

    return 0;
}