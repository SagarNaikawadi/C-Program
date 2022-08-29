#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{ 
    int r = 0,c = 0;
   
   printf("\n\n Pattern is =>\n\n");
  
    for(r = 1;r <= 4;r++)
    { 
      printf("\t");
      for(c =1;c <= 5;c++)
      {
        printf(" * ");
      }
      
      printf("\n");
    }
    
   
    getch();
    return 0;
}