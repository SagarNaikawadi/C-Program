#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[3] = {},i =0,Ecnt = 0;

    for(i = 0;i<3;i++)
    {
        printf("\n Enter Array Elements %d => ",i+1);
        scanf("%d",&Arr[i]);
    }
    for(i = 0;i<3;i++)
    {
       if(Arr[i]%2==0 && Arr[i]!=0)
       {
           Ecnt++;
       }
    }
    printf("\n Event Count in Given Array %d",Ecnt);

    getch();
    return 0;
}
