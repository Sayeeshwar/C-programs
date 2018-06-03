#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num,sum=0,dig=0,div=10,copy,rev[50];
    printf("\n Enter a number: ");
    scanf("%d",&num);
    copy=num;
    while(copy!=0)
    {
        copy/=10;
        dig++;

    }
    printf("\n Number of digits: %d \n",dig);
    copy=num;
    printf("\n Reverse of number: ");
    for(i=0;i<dig;i++)
    {
        rev[i]=copy%10;
        copy/=10;
        printf("%d",rev[i]);
        sum+=rev[i];
    }
    printf("\n\n Sum of digits: %d \n",sum);
    return 0;
    getch();
}
