#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{ 
    int r = 0,c = 0,cnt = 0;
    char Ch = 'A';
    
    printf("\n Enter Rows and columns Count =>");
    scanf("%d",&cnt);
    
    for(r = 1;r <= cnt;r++)
    {
      for(c = 1,Ch = 'A';c <= cnt;c++)
      {
        if(r >= c)
        {
          printf("%c",Ch);  
        }   
        else 
        {
          printf("   "); 
        }
        Ch++;
      }
      printf("\n");
    }
    getch();
    return 0;
}