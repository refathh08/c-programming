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