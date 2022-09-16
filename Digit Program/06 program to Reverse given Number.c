#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    int No = 0,Dig = 0,Rev = 0,Temp = 0;
    Up:
    printf("\n Enter positive Integer Number =>");
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
      Rev = (Rev * 10)+ Dig;
      Temp = Temp / 10;
    }
    printf("\n Reverse number %d is %d",No,Rev);
    
    getch();
    return 0;
}