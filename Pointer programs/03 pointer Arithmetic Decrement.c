#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    int Num[5]={21,38,54,48,51};
    int *ptr=&Num[3];
    
    printf("\n Base Address of Array =%d",Num);
    printf("\n value of pointer is = %d",ptr);
    printf("\n value of Array Elements where pointer pointing %d",*ptr);
    
    getch();
    ptr--;
    
    printf("\n\n New value in pointer is %d",ptr);
    printf("\n Value of Array Element where pointer pointing %d",*ptr);
    
    getch();
    return 0;
    
}