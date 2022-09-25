#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
     int Arr[5]={ };
     
     printf("\n Value of 1st Elemnt is %d",Arr[0]);
     printf("\n Value of 2nd Elemnt is %d",Arr[1]);
     printf("\n Value of 3rd Elemnt is %d",Arr[2]);
     printf("\n Value of 4th Elemnt is %d",Arr[3]);
     printf("\n Value of 5th Elemnt is %d",Arr[4]);
    
     getch();
     
     printf("\n\n Accept All Element \n\n ");
     
     printf("\n Enter [0] Elment");
     scanf("%d",&Arr[0]);
     
     printf("\n Enter [1] Element ");
     scanf("%d",&Arr[1]);
     
     printf("\n Enter [2] Element ");
     scanf("%d",&Arr[2]);
     
     printf("\n Enter [3] Element ");
     scanf("%d",&Arr[3]);
     
     Arr[3] = 45;
     Arr[2] = 59;
     Arr[4] = 57;
     
     printf("\n Enter [4] Element ");
     scanf("%d",&Arr[4]);
     
     printf("\n Diplay All Element ");
     
     printf("\n Value Of 1st Element is %d",Arr[0]);
     printf("\n Value Of 2nd Element is %d",Arr[1]);
     printf("\n Value Of 3rd Element is %d",Arr[2]);
     printf("\n Value Of 4th Element is %d",Arr[3]);
     printf("\n Value Of 5th Element is %d",Arr[4]);
     
     
     getch();
     return 0;
     
}