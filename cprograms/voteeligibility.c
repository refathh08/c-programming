#include<stdio.h>
int main(){
	int age;
	printf("Enter your age\n");
	scanf("%d",&age);
	if(age>=18)
		printf("You are eligible to vote\n");
	else
		printf("Sorry you cannot vote\n");
	return 0;
}

