//Program to add 2 pointers
#include<stdio.h>
int main()
{
    int *p,*q,one,two,sum=0;
    printf("Enter one and two\n");
    scanf("%d%d",&one,&two);
    p=&one;
    q=&two;
    sum=*p+*q;
    printf("Resultant pointer =%d\n",sum);
    return 0;
}