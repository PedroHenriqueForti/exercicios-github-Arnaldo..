/*programa: calcula a prestacao atrasada.
nome: Pedro Henrique Silva Forti
data: 16/10/2019*/

#include<stdio.h>
#include<locale.h>

int main() {
float dias=0, valor=0, prestacao=0, real=0, tempo=0, taxa;


printf(" informe o valor: ");
scanf("%f",&valor);
printf(" informe a taxa:  ");
scanf("%f",&taxa);
printf(" informe os dias: ");
scanf("%f",&dias);
printf(" informe o tempo de atraso: ");
scanf("%f",&tempo);

printf("o valor final da prestacao e: %f", valor+(valor*(taxa/100)*tempo));

}
