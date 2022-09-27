#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    int Arr[4] = { },i = 0,Bill_Sum = 0;
    
    for(i = 0;i < 4;i++)
    {
      printf("\n Enter Bill No %d => ",i+1);
      scanf("%d",&Arr[i]);
      
      Bill_Sum = Bill_Sum + Arr[i];
    }
    
     for(i = 0;i < 4;i++)
     {
       printf("\n Amount in Bill No is  = %d",Arr[i]);

     }
     
     printf("\n=================================");
     
     printf("\n Total Amount Received Today = %d",Bill_Sum);
     
     printf("\n=================================\n");
     
    getch();   
    return 0;
}