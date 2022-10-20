#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct student
{
            int Roll_No;
            char Name[40];
            char City[20];
            float per;
};
int main()
{
            struct student std1,std2;

            printf("\n Enter 1st Student Details => \n ");

            printf("\n Enter Student Roll Number => ");
            scanf("%d",&std1.Roll_No);

            fflush(stdin);

            printf("\n Enter Student Name => ");
            gets(std1.Name);

            fflush(stdin);

            printf("\n Enter Student City => ");
            gets(std1.City);

            printf("\n Enter Student Percentage => ");
            scanf("%f",&std1.per);

            printf("\n Enter 2nd Student Details => \n");

            printf("\n Enter Student Roll No => ");
            scanf("%d",&std2.Roll_No);

            fflush(stdin);

            printf("\n Enter Student Name => ");
            gets(std2.Name);

            fflush(stdin);

            printf("\n Enter Student City => ");
            gets(std2.City);

            printf("\n Enter Student percentage => ");
            scanf("%f",&std2.per);

            printf("\n ==========*****========== \n");

            printf("\n 1st Students Details is =>\n ");

            printf("\n Roll No = %d",std1.Roll_No);
            printf("\n Name    = %s",std1.Name);
            printf("\n City    = %s",std1.City);
            printf("\n Per     = %f",std1.per);

            printf("\n ==========*****========== \n");

            printf("\n 2nd Students Details is =>\n ");

            printf("\n Roll No = %d",std2.Roll_No);
            printf("\n Name    = %s",std2.Name);
            printf("\n City    = %s",std2.City);
            printf("\n Per     = %f",std2.per);

            printf("\n ==========*****========== \n");

            getch();
            return 0;
}
