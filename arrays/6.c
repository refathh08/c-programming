//program to print the elements of an array in reverse order
 //This program takes an array of integers and prints its elements in reverse order
 //The array can have a maximum of 10 elements
 //The user is prompted to enter the number of elements and the elements themselves
 //The output displays the elements in reverse order
#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("Enter no of elements in array\n");
    scanf("%d",&n);
    printf("Enter the %d elements in array\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
        printf("The reverse order array elements are\n");
        for(i=n-1;i>=0;i--)
        printf("%d\t",a[i]);
        printf("\n");
        return 0;
}