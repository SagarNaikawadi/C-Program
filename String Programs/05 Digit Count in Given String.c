#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    char cSrc[40]= { '\0'};
    int i = 0,Dcnt = 0;
    
    puts("\n Enter The String => ");
    gets(cSrc);
    
    while (cSrc[i] != '\0')
    {
      if(cSrc[i] >='0' && cSrc[i] <= '9')
      {
        Dcnt++;
      }
      i++;
    }
    printf("\n Digit Count in Given String = %d",Dcnt);
    
    getch();
    return 0;
}