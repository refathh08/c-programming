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