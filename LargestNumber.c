#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50],max,i,n;
    printf("\n Enter the total number of elements to be entered: ");
    scanf("%d",&n);
    printf("\n Enter \n\n Element 1: ");
    scanf("%d",&a[0]);
    max=a[0];
    for(i=1;i<n;i++)
    {
        printf("\n Element %d: ",i+1);
        scanf("%d",&a[i]);
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("\n The largest number of the entered set is: %d \n",max);
    return 0;
    getch();
}
