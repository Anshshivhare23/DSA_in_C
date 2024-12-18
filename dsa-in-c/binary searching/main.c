#include <stdio.h>

int main() {
    int size, key;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the sorted elements
    printf("Enter %d sorted elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the value to search for
    printf("Enter the value to search for: ");
    scanf("%d", &key);

    // Binary search
    int low = 0;
    int high = size - 1;
    int found = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("%d found at the postion %d.\n", key, mid+1);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("%d not found in the array.\n", key);
    }

    return 0;
}
