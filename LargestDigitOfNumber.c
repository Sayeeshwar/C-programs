#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num,dig=0,copy,rev[50],max=0;
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
        if(max<rev[i])
        {
            max=rev[i];
        }
    }
    printf("\n Largest of digits in the number: %d \n",max);
    return 0;
    getch();
}
