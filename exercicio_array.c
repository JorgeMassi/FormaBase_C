#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
   int array_u[2];
   int array_v[2];
   int array_uv[2];

   printf("\nPosicao em x para vetor U:  ");
   scanf("%d", &array_u[0]);
   printf("\nPosicao em y para o vetor U:   ");
   scanf("%d", &array_u[1]);
   printf("\nPosicao em x para vetor V:  ");
   scanf("%d", &array_v[0]);
   printf("\nPosicao em y para o vetor V:   ");
   scanf("%d", &array_v[1]);

   array_uv[0] = array_u[0] + array_v[0];
   array_uv[1] = array_u[1] + array_v[1];
   printf("\nPosicao do vetor U+V: %d, %d", array_uv[0], array_uv[1]);
}
*/
int main()
{
   int l;
   int c = 0;
   int array_nraluno[3][5];
   int nota_final;


   for( l = 0; l < 3; l++)
   {
       printf("\nNumero de aluno:   ");
       scanf("%d", &array_nraluno[l][0]);

       printf("\nNota do 1 teste:   ");
       scanf("%d", &array_nraluno[l][1]);

       printf("\nNota do 2 teste:   ");
       scanf("%d", &array_nraluno[l][2]);

       printf("\nNota do trabalho:   ");
       scanf("%d", &array_nraluno[l][3]);

       array_nraluno[l][4]= (array_nraluno[l][1] + array_nraluno[l][2] + array_nraluno[l][3]) / 3;
   }

   printf("\nAlunos e respectivas notas:  \n");
   printf("Numero do aluno, Nota do 1teste, Nota do 2teste, Nota do trabalho, nota final\t \n");
   for (l = 0; l < 3; l++)
   {
       printf("       %d            %d              %d              %d               %d  \t \n", array_nraluno[l][0], array_nraluno[l][1], array_nraluno[l][2], array_nraluno[l][3], array_nraluno[l][4]);
       printf("\n");
   }
   /*  printf("\nAlunos e respectivas notas:  \n");
   for (l = 0; l < 3; l++)
   {
      for (c = 0; c < 5; c++)
   {
       printf("%d ", array_nraluno[l][c]);
   }
   printf("\n");*/

}


