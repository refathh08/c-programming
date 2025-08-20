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