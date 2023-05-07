#include <stdio.h>
#include <string.h>


int main()
{
    /*
    char palavra[50];
    int a;

    printf("\nEscreva uma palavra:  ");
    gets(palavra);

    int tam = strlen(palavra);

    for (a = 0; a < tam / 2; a++)
    {
        if (palavra[a] != palavra [tam - a - 1 ])
        {
            printf("\n Nao e uma palavra palíndromo!");
            return 0;
        }
    }
    printf(" \n A palavra e polindromo!");
*/

    char array1[50];
    char array2[50];
    int array3[255] = {0};
    int i, temp;

    printf("\n Introduza a primeira palavra: ");
    gets(array1);
    printf("\n Introduza a segunda palavra: ");
    gets(array2);

    int n = strlen(array1);
    int n1 = strlen(array2);

        for (i = 0; i < n; i++)
            {
                int temp = array1[i];
                if(temp != 32)
                    {
                        array3[temp]++;
                    }
            }
        for (i = 0; i < n1; i++)
            {
                int temp = array2[i];
                if(temp != 32)
                    {
                        array3[temp]--;
                    }
            }

        int anagram = 0;

        for (i = 0; i < 255; i++)
        {
            if (array3[i] != 0)
            {
                anagram++;
            }
        }

        if(anagram != 0)
        {
            printf("Nao sao anagramas!");
        }
        else
        {
            printf("Sao anagramas!");
        }
        return 0;
}

