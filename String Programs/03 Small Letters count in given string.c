#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    char cSrc[40] = {'\0'};
    int i = 0,Scnt = 0;
    
    
    puts("\n Enter The String => ");
    gets(cSrc);
    
    while(cSrc[i] != '\0')
    {
      if(cSrc[i] >='a' && cSrc[i] <= 'z')
      {
        Scnt++;
      }
      i++;
    }
    
    printf("\n Small Letters Count in Given String is %d",Scnt);
    
    getch();
    return 0;
}