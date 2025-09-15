//program to find transpose of a matrix
//This program takes a square matrix as input and calculates its transpose
//The user is prompted to enter the size of the matrix and its elements
//The output displays the transposed matrix
#include<stdio.h>
void main()
    int a[10][10],i,j,n,m;
    printf("Enter the number of rows and columns of the matrix\n");
    scanf("%d%d",&n,&m);
    printf("Enter the elements of the matrix\n");
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    scanf("%d",&a[i][j]);
    printf("The transposed matrix is\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\n",a[j][i]);
        }
    }
}
