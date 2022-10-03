#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[5] = { },i = 0,Ocnt = 0;

    for(i = 0;i < 5;i++)
    {
        printf("\n Enter Array Elements %d => ",i+1);
        scanf("%d",&Arr[i]);
    }
    for(i = 0;i < 5;i++)
    {
        if(Arr[i] % 2 == 1)
        {
          Ocnt++;
        }
    }
    printf("\n Odd Count in Given Array %d",Ocnt);

    getch();
    return 0;
}
