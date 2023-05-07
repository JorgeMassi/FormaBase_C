#include <stdio.h>

int main ()
{
    int a;
    int b;
    int calc;
    int opcao;
    int fat;
    int count;
    float calc2;

    printf("\nValor de A: ");
    scanf("%d", &a);
    printf("\nValor de B: ");
    scanf("%d", &b);

    while(opcao!=10)
    {
        printf("\nSelecione uma opção:  ");
        printf("\n1 - Calcular a soma");
        printf("\n2 - Calcular a subtração");
        printf("\n3 - Calcular a multiplicação");
        printf("\n4 - Calcular a divisão");
        printf("\n5 - Calcular o resto da divisão");
        printf("\n6 - Calcular o fatorial de A");
        printf("\n7 - calcular o fatorial de B");
        printf("\n8 - calcular  se A e par ou impar");
        printf("\n9 - Calcular se B e par ou impar");
        printf("\n10 - sair");
        printf("\nOpçao:    ");
        scanf("%d", &opcao);

        if(opcao == 1)
        {
            calc = a + b;
            printf("Resultado da soma de A com B:   %d", calc);
            printf("\n");
        }
        else if(opcao == 2)
        {
            calc = a - b;
            printf("Resultado da subtração de A com B:  %d", calc);
            printf("\n");
        }
        else if(opcao == 3)
        {
            calc = a * b;
            printf("Resultado da multiplicação de A com B:  %d", calc);
            printf("\n");
        }
        else if(opcao == 4)
        {
            calc2 = (float) a / (float) b;
            printf("Resultado da divisão de A com B:  %.2f", calc2);
            printf("\n");
        }
        else if(opcao == 5)
        {
            calc = a % b;
            printf("Resultado do resto da divisão de A com B:  %d", calc);
            printf("\n");
        }
        else if(opcao == 6)
        {
            fat = 1;
            for(count = 1; count <= a; count++)
            {
                fat = fat * count;
            }

            printf("Resultado do fatorial de A:  %d", fat);
            printf("\n");
        }
        else if(opcao == 7)
        {
            fat = 1;
            for(count = 1; count <= b; count++)
            {
                fat = fat * count;
            }
            printf("Resultado do fatorial de B:  %d", fat);
            printf("\n");
        }
        else if(opcao == 8)
        {

            printf("O valor de A e:  ");
            if ( a % 2 == 0)
                printf("É par");
            else
                printf("É impar");
            printf("\n");
        }
        else if(opcao == 9)
        {
            printf("O valor de B e:  ");
            if ( b % 2 == 0)
                printf("É par");
            else
                printf("É impar");
            printf("\n");
        }
    }
}
