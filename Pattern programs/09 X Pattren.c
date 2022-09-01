#include<stdio.h>
#include<conio.h>

int main()
{
    int r = 0,c = 0,cnt = 0;

    printf("\n Enter Rows And Columns count => ");
    scanf("%d",&cnt);

    for(r = 1;r <= cnt;r++)
    {
        for(c = 1;c <= cnt;c++)
        {
            if(r == c || r+c==cnt+1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
