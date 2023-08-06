#include <stdio.h>
// Program to print negative elements in array and total
void main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size], i, count=0;

    for (i = 0; i < size; i++) {
        printf("Enter element %d of the array: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    printf("All negative elements in array :\n");
    for(i = 0; i < size; i++){
    	if(a[i] < 0){
    		printf("%d" , a[i]);
    		count++;
		}
		
	}
	 printf("\nTotal negative elements in array = %d", count);
}

