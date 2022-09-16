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
    if(No == Rev)
    {
      printf("\n Given Number is palindrome");
    }
    else
    {
      printf("\n Given Number is Not Palindrome");
    }
   
    
    getch();
    return 0;
}