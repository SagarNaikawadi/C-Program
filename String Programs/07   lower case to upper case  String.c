#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    char cSrc[40]= { '\0'};
    int i = 0;
    
    puts("\n Enter The String => ");
    gets(cSrc);
    
    while (cSrc[i] != '\0')
    {
      if(cSrc[i] >='a' && cSrc[i] <= 'z')
      {
        cSrc[i] = cSrc[i] -32;
      }
      i++;
    }
    printf("\n Upper Case is = %s",cSrc);
    
    getch();
    return 0;
}