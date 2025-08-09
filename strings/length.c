#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int len=0,i;
    printf("Enter a string\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
    len=strlen(str);
    }
    printf("The length of string is %d\n",len);
}
