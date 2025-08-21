// This file is part of the C programming arrays project.
// It demonstrates how to find the largest element in an array.
// The program prompts the user to enter the number of elements and the elements themselves.
// The output displays the largest element in the array.
// The array can have a maximum of 50 elements.
#include<stdio.h>
int main()
{
    int a[50],i,n,large=0;
    printf("Enter n value\n");
    scanf("%d",&n);
    printf("Enter elements of array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
    if(a[i]>large)
    large=a[i];
    }
    printf("The largest element in array is %d\n",large);
    return 0;
}