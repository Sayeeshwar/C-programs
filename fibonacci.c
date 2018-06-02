#include<stdio.h>
#include<conio.h>
int main()
{
    int sum,i,n,a=0,b=1,c=0;
    printf("\n Enter number of terms you want in the fibonacci sequence: ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("0");
    }
    if(n==2)
    {
        printf("0,1");
    }
    if(n>2)
    {
        printf("\n %d,%d,",a,b);
        for(i=0;i<n-3;i++)
        {
            c=a+b;
            printf("%d,",c);
            a=b;
            b=c;
        }
        c=a+b;
        printf("%d",c);
    }
    return 0;
    getch();
}
