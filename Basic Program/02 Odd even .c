#include <stdio.h>
#include<conio.h>


int main()
{
  int No=0;
  UP:
  
  printf(" \n Enter Any number");
  scanf("%d%",&No);
  if(No<0)
  {
    printf("\n please Enter Positive Integer Number");
    goto UP;
  }
  if(No%2==0)
  {
      printf("this is even number");
  }
  
  else
  {
      printf("this is odd number");
  }
  return 0;
}