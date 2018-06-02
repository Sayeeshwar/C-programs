#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,fact=1;
    printf("\n Enter the number for which factorial is computed: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("\n %d",fact);
    return 0;
    getch();
}
