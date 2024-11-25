#include <stdio.h>
#include <stdlib.h>
int main()
{   int i, j;
    int dim1, dim2;
    int **M;

    scanf("%d %d",&dim1,&dim2);

    M=(int**)malloc(dim1 * sizeof(int *));
    if(M==NULL)
    {
        printf("Alocare gresita a memoriei\n");
        exit(1);
    }


    for( i=0;i<dim1;i++){
        M[i]=(int *)calloc(dim2, sizeof(int));
        if(M[i]==NULL)
        {
            printf("Alocarea gresita a memoriei 2 \n");
            exit(1);
        }
    }
    for(i=0;i<dim1;i++)
    {
        for( j=0;j<dim2;j++)
        {
            scanf("%d",&M[i][j]);
        }
    }
    printf("Prima valoare %d\n",M[0][0]);
    printf("Adresa primului %p\n",(void *)&M[0][0]);
    printf("Ultima valoare %d\n",M[dim1-1][dim2-1]);
    printf("Adresa ultimului %p",(void *)&M[dim1-1][dim2-1]);

    for(i=0;i<dim1;i++)
    {
        free(M[i]);
    }
    free(M);

    return 0;

}