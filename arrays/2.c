// This file is part of the C programming arrays project.
// It demonstrates how to add two arrays element-wise.
#include<stdio.h>
void main()
{
    int a[10],b[10],c[10],n,i;
    printf("Enter the total no of elements\n");
    scanf("%d",&n);
    printf("Enter the elements of array a\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the elements of array b\n");
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
        for(i=0;i<n;i++)
        c[i]=a[i]+b[i];
        printf("The resultant array is\n");
        for(i=0;i<n;i++)
        printf("%d\n",c[i]);

}
