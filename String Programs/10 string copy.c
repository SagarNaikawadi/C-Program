#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    char cSrc[50]={'\0'},cDest[50]={'\0'};
    int i = 0;
    
    puts("\n Enter The String => ");
    gets(cSrc);
    
    while(cSrc[i] != '\0')
    {
       cDest[i] = cSrc[i];
       i++;
    }
    
    
    printf("\n Original String is %s",cSrc);
    printf("\n Copied string is %s",cDest);
    
     getch();
     return 0;
}