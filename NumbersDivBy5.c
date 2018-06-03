#include<stdio.h>
#include<conio.h>
int main()
{
    int max,i;
    printf("\n Enter max number till which to check for: ");
    scanf("%d",&max);
    for(i=1;i<=max;i++)
    {
        if(i%5==0)
        {
            printf("\n %d",i);
        }
    }
    return 0;
    getch();
}
