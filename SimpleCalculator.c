#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,choice;
    while(choice!=5)
    {
        printf("\n\n Pick a choice: \n1. Addition \n2. Subtraction \n3. Multiplication \n4. Division\n5. Exit\n ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\n Enter 2 numbers: \n");
            scanf("%d%d",&a,&b);
            c=a+b;
            printf("\n Sum: %d",c);
            break;
        case 2:
            printf("\n Enter 2 numbers: \n");
            scanf("%d%d",&a,&b);
            c=a-b;
            printf("\n Difference: %d",c);
            break;
        case 3:
            printf("\n Enter 2 numbers: \n");
            scanf("%d%d",&a,&b);
            c=a*b;
            printf("\n Product: %d",c);
            break;
        case 4:
            printf("\n Enter 2 numbers: \n");
            scanf("%d%d",&a,&b);
            c=a/b;
            printf("\n Quotient: %d",c);
            break;
        case 5:
            break;
        default:
            printf("\n Enter a valid choice");
            break;
        }
    }
}
