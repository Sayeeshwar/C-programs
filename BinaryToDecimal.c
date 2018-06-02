#include<stdio.h>
#include<conio.h>
int main()
{
    int dig,binary,bin,decimal=0,i,n;
    printf("\n Enter the number of digits in the binary number and then enter your binary number: ");
    scanf("%d %d",&n,&binary);
    bin=binary;
    for(i=0;i<n;i++)
    {
        dig=binary%10;
        binary/=10;
        decimal+=(dig<<i);
    }
    printf("\n The binary number %d = %d",bin,decimal);
}
