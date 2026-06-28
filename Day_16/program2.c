#include <stdio.h>
int main() {
    int n, j, i;
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for( i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    }
    int maxFreq = 0, maxElement;
    for(i = 0; i < n; i++) {
        int count = 1;
        for( j = i+1; j < n; j++){
            if(arr[i]==arr[j]) {
                count++;
            }
        }
        if(count > maxFreq){
            maxFreq = count;
            maxElement = arr[i];
        }
    }
    printf("Maximun frequency element = %d\n", maxElement);
    printf("Frequency = %d", maxFreq);
    return 0;
}