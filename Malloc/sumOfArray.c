#include <stdio.h>
//Sum of two array

void main() {
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *a = (int *)malloc(size * sizeof(int));
    int *b = (int *)malloc(size * sizeof(int));
    int *c = (int *)malloc(size * sizeof(int));

    // First array
    for (i = 0; i < size; i++) {
        printf("Enter %d element of the array 1: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Second array
    for (i = 0; i < size; i++) {
        printf("Enter %d element of the array 2: ", i + 1);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < size; i++) {
        c[i] = a[i] + b[i];
    }

    printf("Sum of two array elements are:\n");

    for (i = 0; i < size; i++) {
        printf("%d\n", c[i]);
    }

    free(a);
    free(b);
    free(c);

}
