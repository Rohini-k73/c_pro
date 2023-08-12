/**
 * C program to print all natural numbers from 1 to n using recursion
 */

#include <stdio.h>

void printNumbers(int first, int last);

void main()
{
    int first, last;
   
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter last number: ");
    scanf("%d", &last);

    printf("All natural numbers from %d to %d are:\n ", first, last);
    printNumbers(first, last);
}

void printNumbers(int first, int last)
{
    if(first > last)
        return;
    
    printf("%d\n ", first);
    printNumbers(first + 1, last);
}