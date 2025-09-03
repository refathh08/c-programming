// This file is part of the C programming arrays project.
// It demonstrates how to calculate the sum of elements in an array.
// The program prompts the user to enter the number of elements and the elements themselves.
// The output displays the sum of the elements.
#include<stdio.h>
void main()
{
    int i,n,sum=0,a[11];
    printf("Enter the total numbers\n");
    scanf("%d",&n);
    printf("Enter %d numbers\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("The sum of %d numbers is\n",n);
    printf("%d\n",sum);
}
