//program to concatenate 2 strings using the strcat manipulation function
#include<stdio.h>
#include<string.h>
int main(){
	char str1[50],str2[50];
	printf("Enter 2 strings\n");
	scanf("%s%s",str1,str2);
	strcat(str1,str2);
	printf("The concatenated string is %s\n",str1);
	return 0;
}
