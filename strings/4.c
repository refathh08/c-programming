//program to concatenate 2 strings without using strcat function
#include<stdio.h>
#include<string.h>
int main(){
	char str1[50],str2[50],str3[50];
	int k,i;
	printf("Enter 2 strings\n");
	scanf("%s%s",str1,str2);
	k=0;
	for(i=0;str1[i]!='\0';i++){
		str3[k]=str1[i];
	k=k+1;
	}
	for(i=0;str2[i]!='\0';i++){
		str3[k]=str2[i];
		k=k+1;
	}
	str3[k]!='\0';
	printf("The concatenated string is %s\n",str3);
	return 0;
}
