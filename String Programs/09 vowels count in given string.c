#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    char cSrc[40]= { '\0'};
    int i = 0,vcnt = 0;
    
    puts("\n Enter The String => ");
    gets(cSrc);
    
    while (cSrc[i] != '\0')
    {
      if(cSrc[i] =='a' || cSrc[i] == 'e'||cSrc[i] =='i' || cSrc[i] == 'o'||cSrc[i] =='u')
       {
         vcnt++;
       } 
      i++;
    }
    printf("\n vowel count in given string = %d",vcnt);
    
    getch();
    return 0;
}