#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    int i,len=0;
    printf("Enter a string\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        len=len+1;
    }
    printf("The entered string is %s\n",str);
    printf("The length of string is %d\n",len);


}