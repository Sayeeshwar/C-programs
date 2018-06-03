#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int expo(int base,int pow)
{
    int i,result=1;
    for(i=0;i<pow;i++)
    {
        result*=base;
    }
    return result;
}

int main()
{
    int i,num,pow,sum=0,dig=0,copy,rev[50],reverse=0;
    printf("\n Enter a number: ");
    scanf("%d",&num);
    copy=num;
    while(copy!=0)
    {
        copy/=10;
        dig++;
    }
    copy=num;
    for(i=0;i<dig;i++)
    {
        rev[i]=copy%10;
        copy/=10;
        pow=dig-(i+1);
        reverse +=(rev[i]* expo(10,pow));
    }
    printf("\n\n Reverse of number: %d",reverse);
    if(num==reverse)
    {
        printf("\n %d is a palindrome.",reverse);
    }
    else
    {
        printf("\n %d is not a palindrome.",num);
    }
    return 0;
    getch();
}
