
//selection sort 
#include <stdio.h>

int main() 
{
    int arr[10];
    int n, i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
   for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    printf("Sorted elements are: ");
    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


