#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    int Num[5]={15,59,88,27,65};
    int *ptr=&Num;
  
    printf("\n Base Address of Array =%d",Num);
    printf("\n Value of pointer is = %d",ptr);
    printf("\n Value where pointer pointing = %d",*ptr);
    
    getch();
    ptr++;
    
    printf("\n \n New value in pointer is = %d",ptr);
    printf("\n value where pointer pointing = %d",*ptr);
    
    getch();
    return 0;
}
