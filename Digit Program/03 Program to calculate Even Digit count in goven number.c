#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    int No = 0,Dig = 0,Ecnt = 0,Temp = 0;
    Up:
      
    printf("\n Enter Any Positive Integer Number =>");
    scanf("%d",&No);
    Temp = No;
    
    if(No < 0)
    {
      printf("\n Invalid Input");
      goto Up;
    }
    while (Temp > 0)
    {
      Dig = Temp % 10;
      if(Temp % 2 == 0)
      {
        Ecnt++;
      }
      Temp = Temp / 10;
    }
    printf("\n Even count in given nber %d is = %d",No,Ecnt);
    
    getch();
    return 0;
}