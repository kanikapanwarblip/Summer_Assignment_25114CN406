#include <stdio.h>

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        int min = i;

        // Find the index of the smallest element
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        // Swap the found minimum element with the first unsorted element
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}