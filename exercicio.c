#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("\nValor de A:   ");
    scanf("%d", &a);
    printf("\nvalor de B:   ");
    scanf("%d", &b);
    printf("\nResultato da soma de A e B = %d", a + b);
    printf("\nResultado da subtracao de A e B = %d", a - b);
    printf("\nResultado da multiplicacao de A e B = %d", a * b);
    printf("\nResultatdo da divisao de A e B = %d", a / b);
    printf("\nResultado do resto de A e B = %f", a % b);
    printf("\n (A + B) > (A * B) E (A + 10) > B = %d", ((a + b) > (a * b)) && ((a + 10) > b));
    printf("\n (A + B) > (A * B) OU (A + 10) > B = %d", ((a + b) > (a * b)) || ((a + 10) > b));

}
