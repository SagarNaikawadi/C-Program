#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
   int No = 0,Fact = 1;
   
    printf("\n Entet Any number");
    scanf("%d",&No);
  
    while(No > 0)
    {
      Fact = Fact * No;
      No--;
    }
    printf("\n Factorial is %d",Fact);
    
    getch();
    return 0;
}