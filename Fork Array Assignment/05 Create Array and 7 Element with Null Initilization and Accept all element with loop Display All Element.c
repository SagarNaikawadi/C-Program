#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int Arr[7] = { },i = 0;
  
  for(i = 0;i<7;i++)
  {
    printf("\n Enter Element %d => ",i+1);
    scanf("%d",&Arr[i]);
  }
  
  printf("\n\n==========****===========\n\n");
  
  for(i = 0;i<7;i++)
  {
    printf("\n Display Elements is %d",Arr[i]);
  }
  printf("\n\n==========****===========\n\n");
  
  
  getch();
  return 0;
}