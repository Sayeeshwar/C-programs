#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num,dig=0,copy,rev[50];
    printf("\n Enter a number: ");
    scanf("%d",&num);
    copy=num;
    while(copy!=0)
    {
        copy/=10;
        dig++;

    }
    copy=num;
    printf("\n Reverse of number: ");
    for(i=0;i<dig;i++)
    {
        rev[i]=copy%10;
        copy/=10;
        printf("%d",rev[i]);
    }
    return 0;
    getch();
}
