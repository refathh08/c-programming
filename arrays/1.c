#include<stdio.h>
int main()
{
    int i,n,sum=0,a[10];
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
    return 0;
}