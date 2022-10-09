#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cSrc[40] = {'\0'};
    int len = 0;

    puts("\n Enter The String => ");
    gets(cSrc);

    len = strlen(cSrc);

    printf("\n String Count in Given String is = %d",len);

    getch();
    return 0;
}
