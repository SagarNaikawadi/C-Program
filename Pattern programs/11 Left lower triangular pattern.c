#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{ 
    int r,c,cnt;
    printf("\n Enter Rows and columns Count");
    scanf("%d",&cnt);
    
    for(r=1;r<=cnt;r++)
    {
      for(c=1;c<=cnt;c++)
      {
        if(r>=c)
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