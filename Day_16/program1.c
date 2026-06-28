#include <stdio.h>
int main () {
    int n, i;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter %d elements:\n", n - 1);
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0; 
    for(i = 0; i < n - 1; i++) {
        sum += arr[i];
    }
    int total_sum = n * (n + 1) / 2;
    printf("Missing number is: %d\n", total_sum - sum);
    return 0;
}