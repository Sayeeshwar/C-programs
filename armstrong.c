#include<stdio.h>
#include<conio.h>
int main()
{
    int i,max,a,b,c,r;
    printf("\n Enter a maximum range for your armstrong - max 3 digits: ");
    scanf("%d",&max);
    for(i=1;i<max;i++)
    {
        if(i<10)
        {
            if(i*i*i == i)
            {
                printf("\n %d",i);
            }
        }
        if((i<100)&&(i>9))
        {
            a=i%10;
            r=i;
            r=r/10;
            b=r;
            if(i==(a*a*a)+(b*b*b))
            {
                printf("\n %d",i);
            }

        }
        if((i<1000)&&(i>99))
        {
            a=i%10;
            r=i;
            r=r/10;
            b=r%10;
            c=r/10;
            if(i==(a*a*a)+(b*b*b)+(c*c*c))
            {
                printf("\n %d",i);
            }

        }
    }
}
