#include<stdio.h>
main()
{
    int a [2][2];
    int b [2][2];
    int c [2][2];

   int i,j;

    for (i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            printf("Entre com um valor para os elementos A:\n ");
                scanf("%d", &a[i][j]);
            printf("Entre com um valor para os elementos B:\n ");
                scanf("%d", &b[i][j]);
            c[i][j]=a[i][j]+b[i][j];
        }

          for (i=0;i<2;i++)
            for (j=0;j<2;j++)
            {
                printf("Os elementos da Matriz:%d \n", c[i][j]);

            }











}
