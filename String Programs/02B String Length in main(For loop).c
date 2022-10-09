#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[40] ={'\0'};
    int len = 0;

    puts("\n Enter the String => ");
    gets(cSrc);

    for(len = 0;cSrc[len]!='\0';len++);

    printf("\n Length Count in Given String is = %d",len);

    getch();
    return 0;
}
