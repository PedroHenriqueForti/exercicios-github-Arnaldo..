/*programa:multiplica 3 valores para encontrar um quarto valor
 nome: Pedro Henrique Silva Forti
 data: 09/10/2019*/
#include <iostream>
#include <stdio.h>
int main()
{
 int valor1 = 0, valor2 = 0, valor3 = 0, valor4 = 0;
  
   
  printf("informe o valor 1: ");
  scanf("%i", &valor1);
   printf("informe o valor 2: ");
  scanf("%i", &valor2);
    printf("informe o valor 3: ");
  scanf("%i", &valor3);
 
	valor4 = valor1*valor2*valor3;
	printf("o quarto valor é = %i",valor4);
	system("pause");
} 
