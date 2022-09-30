#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{ 
    int Arr[5] = { },i = 0,Zcnt = 0;
    
    for(i = 0;i < 5;i++)
    {
      printf("\n Enter Array Elements %d => ",i+1);
      scanf("%d",&Arr[i]);
    }
    
    for(i = 0;i < 5;i++)
    {
      if (Arr[i] == 0)
      {
        Zcnt++;
      }
    }
    printf("\n Zero count in gievn Array is %d",Zcnt);
    
    getch();
    return 0;
}