#include <stdio.h>

int main() {
    int arr1[50], arr2[50], arr3[100];
    int n1, n2, i;

    // Input first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Copy arr1 into arr3
    for(i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    // Copy arr2 into arr3
    for(i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

    // Print merged array
    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}
