#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{ 
    int Arr[5] = { },i = 0,Scnt = 0;
    
    for(i = 0;i < 5;i++)
    {
      printf("\n Enter Array Elements %d => ",i+1);
      scanf("%d",&Arr[i]);
    }
    
    for(i = 0;i < 5;i++)
    {
      if (Arr[i] == 7)
      {
        Scnt++;
      }
    }
    printf("\n Sevan count in gievn Array is %d",Scnt);
    
    getch();
    return 0;
}