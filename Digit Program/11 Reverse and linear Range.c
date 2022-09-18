#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    int R = 0,C = 0,Scnt = 0,Ecnt = 0;
    
    printf("\n Enter Staring Range =>");
    scanf("%d",&Scnt);
    
    printf("\n Enter Ending Range =>");
    scanf("%d",&Ecnt);
    
    if(Scnt < Ecnt)
    {
      for( R = 1;R <= 10;R++)
      {
        for(C = Scnt;C <= Ecnt;C++)
        {
          printf("%3d",R*C);
        }
        printf("\n");
      }
    }
    else if( Scnt > Ecnt)
    {
      for( R = 1;R <= 10;R++)
      {
        for(C = Scnt;C >= Ecnt;C--)
        {
          printf("%3d",R*C);
        }
        printf("\n");
      }
    
    }
    getch();
    return 0;
}