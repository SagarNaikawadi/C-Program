#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    int Arr[5] = { },i = 0,src = 0;
    
    for(i = 0;i < 5;i++)
    {
      printf("\n Enter Array Element %d => ",i+1);
      scanf("%d",&Arr[i]);
    }
    printf("\n Enter Seraching Element ");
    scanf("%d",&src);
  
    for(i = 0;i < 5;i++)
    {
      if(Arr[i] == src)
      {
        break;
      }
    }
    if(i < 5)
    {
      printf("\n Enter Element found on index %d",i+1);
    }
    else
    {
      printf("\n Enter Elemnt Not found");
    }
    
    getch();
    return 0;
}