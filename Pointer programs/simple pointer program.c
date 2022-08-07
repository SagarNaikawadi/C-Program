#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    int No=21,Num=55;
    int *ptr1=&No;
    int *ptr2=&No;
    printf("\n %d",No);
    printf("\n %d",&No);
    
    printf("\n\n %d",ptr1);
    printf("\n %d",*ptr1);
    getch();
    return 0;
}