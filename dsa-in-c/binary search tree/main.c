
#include <stdio.h>

int main() {
    int a[10], n, i, x, flag = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to find: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            flag = 1;
            printf("Number found at position %d\n", i + 1);
            break;
        }
    }

    if (!flag) {
        printf("Number not found\n");
    }

    return 0;
}





