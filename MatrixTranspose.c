#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,row,col,a[50][50],t[50][50];
    printf("\n Enter the dimensions of the matrix: ");
    scanf("%d%d",&row,&col);
    printf("\n test message");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\n Element [%d][%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n The matrix is: \n");
    for(i=0;i<row;i++)
    {
        printf("\n");
        for(j=0;j<col;j++)
        {
            printf("\t%d ",a[i][j]);
        }
    }
    printf("\n\n Transpose matrix: \n");
    for(i=0;i<col;i++)
    {
        printf("\n");
        for(j=0;j<row;j++)
        {
            t[i][j]=a[j][i];
            printf("\t%d ",t[i][j]);
        }
    }
}
