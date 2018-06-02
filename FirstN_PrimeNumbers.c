#include<stdio.h>
#include<conio.h>
int main()
{
    int flag=0,n,i,j;
    printf("\n Enter max value of the range to check for prime numbers");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        flag=0;
        if(i==2)
        {
            printf("\n 2");
        }
        if((i%2)==0)
        {
            continue;
        }
        for(j=3;j<i-1;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("\n %d",i);
        }
    }
}
