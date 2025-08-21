//Linear search in an array
//This program searches for an element in an array using linear search
//The array is assumed to be sorted in increasing order
#include<stdio.h>
int main()
{
    int a[10],n,i,key,flag=0;
    printf("Enter the no of elements in array\n");
    scanf("%d",&n);
    printf("Enter the elements in increasing order\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element to be searched\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    if(key==a[i]){
    flag=1;
    break;
    }
    if(flag==1)
    printf("The element is found at %d position",i+1);
    else
    printf("Element not found\n");
    return 0;
}