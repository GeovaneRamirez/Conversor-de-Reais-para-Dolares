#include <stdio.h>
#include <stdlib.h>

/*Este programa foi criado por Geovane Ramirez durante as aulas da faculdade*/
//Este programa tem a finalidade de Converter Dolares em Reais

int main()
{

float valor_do_dolar;

float valor_a_ser_convertido;

float valor_apos_convertido;

printf ("Aqui voce pode converter seus reais em dolares. \n");

printf ("Digite a taxa do dolar: \n ");

scanf("%f", &valor_do_dolar);

printf ("Digite, em reais, o valor que deseja converter para dolares: \n ");

scanf("%f", &valor_a_ser_convertido);

valor_apos_convertido = valor_a_ser_convertido / valor_do_dolar;

printf("O valor, apos convertido, e: %.2f dolares \n", valor_apos_convertido);



    return 0;
}
