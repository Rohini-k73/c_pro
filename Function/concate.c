#include <stdio.h>
// Concatenate two arrays
void concat(int*, int*, int, int);
void main(){
	int size1, size2;

    printf("Enter the size of the first array: "); // Input size of the first array
    scanf("%d", &size1);

    printf("Enter the size of the second array: ");  // Input size of the second array
    scanf("%d", &size2);

    int arr1[size1], arr2[size2];
    int i;

   
    printf("Enter elements of the first array:\n");  // Input elements of the first array
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of the second array:\n");  // Input elements of the second array
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    
	concat(arr1, arr2, size1 ,size2);
	
	
}
concat(int* arr1, int* arr2, int size1 ,int size2) {
	int concat[size1 + size2], i, j;
    // Concatenate both arrays
    for (i = 0; i < size1; i++) {
        concat[i] = arr1[i];
    }

    for (j = 0; j < size2; j++) {
        concat[size1 + j] = arr2[j];
    }

    // Print the concatenated array
    printf("Concatenated array:\n");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", concat[i]);
    }
}

