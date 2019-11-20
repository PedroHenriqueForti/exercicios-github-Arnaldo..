/*programa: calcula o percentual de aumento do novo salario.
nome: Pedro Henrique Silva Forti.
data: 16/10/2019*/

#include<stdio.h>
#include<locale.h>

 int main() 
{

 float salario=0, aumentosal=0, salarfinal=0;

   printf(" informe o atual salario do funcionario: ");
 	  scanf("%f",&salario);
   printf("informe a porcentagem de aumento no salario: ");
 	  scanf("%f",&aumentosal);
   printf("o salario final do funcionario sera: %f", salario+salario*(aumentosal/100));
   
}
