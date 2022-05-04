#include<stdio.h>

void main()
{
    int a[8][8],b[8][8],c[8][8],i,j,k;
    int product=0;
    printf("Enter Value for First Matrix:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    
    printf("Enter value for Second Matrix:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    printf("The First Matrix is:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The Second Matrix is:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }

    printf("\nProduct of Two Matrix:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            product=0;
            for (k=0; k<3; k++)
            {
               product=a[i][k]*b[k][j]; 
            }
            c[i][j]=product;
        }
    }
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
}