#include<stdio.h>
int main()
{
    int a,b,c,large=0;
    printf("Enter 3 numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
    large=a;
    }
    else if (b>a && b>c){
        large=b;
    }
    else{
        large=c;
    }
    printf("The largest number is %d\n",large);
    return 0;
}