#include<stdio.h>
#include<conio.h>

int main()
{
    int r = 0,c = 0,rCnt = 0,cCnt = 0;

    printf("\n Enter Rows count =>");
    scanf("%d",&rCnt);

    printf("\n Enter column count =>");
    scanf("%d",&cCnt);

    for(r = 1;r <= rCnt;r++)
    {
        for(c = 1;c <= cCnt ;c++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
