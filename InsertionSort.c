#include <stdio.h>

int main() {
    int arr[100];
    int n, i, j, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Insertion Sort
    for (i = 1; i < n; i++) {

        key = arr[i];
        j = i - 1;

        // Move greater elements one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert the key in the correct position
        arr[j + 1] = key;
    }

    printf("\nSorted Array:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
