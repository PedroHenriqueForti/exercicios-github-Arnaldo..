w/*programa: calcula a nota final de um aluno.
nome: Pedro Henrique Silva Forti.
data: 16/10/2019*/

#include<stdio.h>
#include<locale.h>

 int main() 
 {
	
float nota1=0, nota2=0, nota3=0, nota4=0, media=0;

	printf("informe nota1: ");
		scanf("%f",&nota1);
	printf("informe nota2: ");
		scanf("%f",&nota2);
	printf("informe nota3: ");
		scanf("%f",&nota3);
	printf("informe nota4: ");	
		scanf("%f",&nota4);
		
		media=(nota1+nota2+nota3+nota4)/4 ;
		
	printf(" a nota final do aluno sera: %f",media );
			
	
}
