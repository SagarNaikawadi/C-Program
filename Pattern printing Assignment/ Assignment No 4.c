#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{
    int R = 0,C = 0,cnt = 0;
    char ch = 'A';
    
    printf("\n Enter Rows and Columns Count");
    scanf("%d",&cnt);
    
    for(R = 1;R <= cnt;R++)
    {
      for(C = 1;C <= cnt;C++)
     {
        if(R >= C)
        {
          printf("%3c",ch);  
               
        }
        else
        {
          printf("   ");
          
        }
      }
      ch++;
      printf("\n");     
    }
    
    getch();
    return 0;
}