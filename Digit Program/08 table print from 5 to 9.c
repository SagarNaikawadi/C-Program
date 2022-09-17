#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{  
   int R = 0,C = 0;
   
   printf("====================================\n");
   
   for(R = 1;R <= 10;R++)
   {
     for(C = 5;C < 10; C++)
     {
       printf(" \t%3d ",R*C);
     }
     printf(" \n");
   }
     
   printf("====================================\n");
   getch();
  return 0;
}