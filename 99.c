#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    printf("                                        multiplication table\n");

    for (i=1;i<=9;i++)
    {
        for (j=1;j<=9;j++)
        {
             printf("\t%d*%d=%-2d ",i,j,i*j);
        }
        printf(" \n ");
    }

    system("pause");
    return 0;
}
