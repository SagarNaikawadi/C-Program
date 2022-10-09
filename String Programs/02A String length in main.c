#include<stdio.h>
#include<conio.h>

int main()
{
            char cSrc[50] ={'\0'};
            int Len = 0;

            puts("\n Enter The String => ");
            gets(cSrc);

            while(cSrc[Len] !='\0')
            {
                Len++;
            }

            printf("\n Length Count in given string is = %d",Len);

            getch();
            return 0;
}
