// This file is part of the C programming exercises repository.
// It demonstrates how to calculate the sum and average of elements in an array.
// The program prompts the user to enter the number of elements and the elements themselves.
// The output displays the sum and average of the elements.
// The array can have a maximum of 10 elements.
// The program uses the C17 language standard version.
// File: c-programming/arrays/4.c
// --- IGNORE ---
// This file is not part of the recent edits, but it is included for context.
// The code below is a complete program that calculates the sum and average of an array of integers
// It is not part of the recent edits, but it is included for context.
#include<stdio.h>
int main()
{
    int a[10],i,n,sum=0,avg;
    printf("Enter no of elements in array\n");
    scanf("%d",&n);
    printf("Enter elements of array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("The sum of %d elements of array is %d\n",n,sum);
    printf("The average of the %d elements is %d\n",n,avg);
    return 0;

}