#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;   // return index
    }
    return -1;
}

int main() {
    int n, key;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int pos = linearSearch(arr, n, key);

    if (pos == -1)
        printf("Element not found.\n");
    else
        printf("Element found at position %d.\n", pos + 1);

    return 0;
}
