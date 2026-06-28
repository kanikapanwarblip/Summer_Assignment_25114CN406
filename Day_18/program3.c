#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int key, low = 0, high = n - 1, mid;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element found at index %d", mid);
            return 0;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("Element not found");

    return 0;
}