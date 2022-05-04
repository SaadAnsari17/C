#include<stdio.h>
void main()
{
    int a[8][8],b[8][8],c[8][8],i,j;
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
    printf("\nThe First Matrix is:\n");
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
    printf("\nAddition of Two Matrix:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
}