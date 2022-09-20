#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int N1 = 1,N2= 0,N3 = 0 ,Cnt = 0;
  
    printf("\n Enter Fibonacci count =>");
    scanf("%d",&Cnt);
  
    while(Cnt > 0)
    {
      printf("\n%d",N2);
      N3 = N1 + N2;
      N1 = N2;
      N2 = N3;
      Cnt --;
    }
     getch();
     return 0;
}