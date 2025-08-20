//A program to print array elements using pointer
#include<stdio.h>
int main()
{
    int *p,a[50],n,i;
    printf("enter no of elements in array\n");
    scanf("%d",&n);
    printf("Enter the elements in array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    p=a;
    printf("The array elements are:\n");
    for(i=0;i<n;i++,p++)
    printf("%d\t\n",*p);
    return 0;
}