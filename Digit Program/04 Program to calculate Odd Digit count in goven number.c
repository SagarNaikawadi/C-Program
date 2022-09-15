#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    int No = 0,Dig = 0,Ocnt = 0,Temp = 0;
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
      if(Dig  == 0)
      {
        Ocnt++;
      }
      Temp = Temp / 10;
    }
    printf("\n Even count in given number %d is = %d",No,Ocnt);
    
    getch();
    return 0;
}