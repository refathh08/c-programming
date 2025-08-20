#include<stdio.h>
int main()
{
    int *p,*q,a,b,temp;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    temp=a;
    a=b;
    b=temp;
    printf("After swapping\n");
    printf("a=%d\n b=%d\n",*p,*q);
    return 0;
}