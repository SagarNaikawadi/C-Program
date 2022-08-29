#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0

int main()
{ 
    int r = 0,c = 0,cnt=0;
   
   printf("\n\n Enter Rows and columns count ");
   scanf("%d",&cnt);
  
    for(r = 1;r <= cnt;r++)
    { 
      printf("\t");
      for(c =1;c <= cnt;c++)
      {
        if(r==1||r+c==cnt+1||r==cnt)
        {
          printf(" * ");
        }
        else
        {
          printf("   ");
        }
      }
      
      printf("\n");
      
    }
    
   
    getch();
    return 0;
}