#include<stdio.h>
#include<conio.h>

int main()
{
    float rad,area,cir;

    printf("\n Enter a radius");
    scanf("%f",&rad);
    area= 3.14*rad*rad;
    cir=2*3.14*rad;
    printf("\nArea is %f and Circumference is %f",area,cir);
    return 0;
    getch();
}
