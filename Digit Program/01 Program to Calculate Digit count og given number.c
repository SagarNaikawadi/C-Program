#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int No = 0,Digit = 0,Dcnt = 0,Temp = 0;
  UP:
  
    printf("\n Enter Positive Integer Number =>");
    scanf("%d",&No);
    
    Temp=No;
    if(No < 0)
    {
      printf("\n Invalid Input ");
      goto UP;
    }
    
    
    while(Temp > 0)
    {
      Dcnt++;
      Temp = Temp/10;
    }
    
    printf("\n Digit count in given number %d is = %d",No,Dcnt);
    getch();
    return 0;
}