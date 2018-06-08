#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k,n,a[100][100];
    printf("\n Enter the number of levels: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(k=0;k<n-i;k++)
        {
            printf("  ");
        }
        for(j=0;j<i+1;j++)
        {
            if(i+1==1)
            {
                a[i][j]=1;
                printf("%d   ",a[i][j]);
            }
            if(i+1==2)
            {
                a[i][j]=1;
                printf("%d   ",a[i][j]);
            }
            if(i+1>2)
            {
                if((j==0)||(j==i))
                {
                    a[i][j]=1;
                }
                else
                {
                    a[i][j]=a[i-1][j-1]+a[i-1][j];
                }
                printf("%d   ",a[i][j]);
            }
        }
    }
}
