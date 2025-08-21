//program to count even and odd numbers in an array
//This program takes an array of integers and counts the number of even and odd elements
//The user is prompted to enter the number of elements and the elements themselves
//The output displays the count of even and odd numbers
#include<stdio.h>
int main()
{
    int a[10],n,i,even=0,odd=0;
    printf("Enter the no of elements in array\n");
    scanf("%d",&n);
    printf("Enter %d elements in array\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(a[i]%2==0)
        even++;
        else 
        odd++;
    }
        printf("even=%d\n",even);
        printf("Odd=%d\n",odd);
    return 0;
}