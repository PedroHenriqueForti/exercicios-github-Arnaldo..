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

*
   Titulo: Joguin da velha .
   Objetivo: entregar o trabalho.
   data: 06/11/2019.
   Autor: PIMPOLHUDO < lucca.ovo@etec.sp.gov.br>
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char tela[3][3];
int i, j, x, y, teste=1, pl, velha=0;

void disp(void);
void testa(int pl);
void play1(void);
void play2(void); 
void main()
 

 
{
   for(i=0;i<3;i++)
      for(j=0;j<3;j++)
         tela[i][j]=' ';
    
      while(teste!=0)
     {
         if(teste!=0)
         {      
            play1();
            if(tela[x][y]==' ')
            {
               tela[x][y]='X';
               system("cls");
               velha++;
               testa(pl);      
            }
            else
            {
               system("cls");
               printf(" essa posicao ja ta ocupada!!\n"); 
               printf("Pressione qualquer tecla para entrar novo valor\n");
               getch();
               system("cls");
               play1();
            }
         }
         if(teste!=0)
         {
            play2();
            if(tela[x][y]==' ')
            {
               velha++;
               tela[x][y]='O';
               system("cls");
               testa(pl);   
            }
            else
            {
               system("cls");
               printf("essa posicao ja ta ocupada!!\n"); 
               printf("Pressione qualquer tecla para entrar novo valor\n");
               getch();
               system("cls");
               play2()
	}
	 }
	  }
	   }
void disp(void)
{
   printf("   1   2   3   Y\n");
   printf(" 1 %c | %c | %c \n",tela[0][0],tela[0][1],tela[0][2]);
   printf("  ---|---|--- \n ");
   printf("2 %c | %c | %c \n",tela[1][0],tela[1][1],tela[1][2]);
   printf("  ---|---|--- \n ");
   printf("3 %c | %c | %c \n",tela[2][0],tela[2][1],tela[2][2]);

   printf("X\n");  }
void testa(int pl) {
         if(x==0)
         if((tela[0][0]==tela[0][1]) && (tela[0][1]==tela[0][2]))
         {
            disp();
            printf("PLAYER **%i** VENCEU!! \n",pl);
         teste=0;
         }
         
         if(x==1)
         if((tela[1][0]==tela[1][1]) && (tela[1][1]==tela[1][2]))
         {
            disp();
            printf("PLAYER **%i** VENCEU!! \n",pl);
            teste=0;
         }
         if(x==2)
         if((tela[2][0]==tela[2][1]) && (tela[2][1]==tela[2][2]))
         {
            disp();
            printf("PLAYER **%i** VENCEU!! \n",pl);
            teste=0;
         }
         if(y==0)
         if((tela[0][0]==tela[1][0]) && (tela[1][0]==tela[2][0]))
         {
            disp();
            printf("PLAYER **%i** VENCEU!! \n",pl);
            teste=0;
         }
         if(y==1)
         if((tela[0][1]==tela[1][1]) && (tela[1][1]==tela[2][1]))
         {
            disp();
            printf("PLAYER **%i** VENCEU!! \n",pl);
            teste=0;
         }
         if(y==2)
         if((tela[0][2]==tela[1][2]) && (tela[1][2]==tela[2][2]))
         {
            disp();
            printf("PLAYER **%i** VENCEU!! \n",pl);
            teste=0;
         }
         
         if(((x==0)&&(y==0))||((x==1)&&(y==1))||((x==2)&&(y==2)))
         {
         if((tela[0][0]==tela[1][1]) && (tela[0][0]==tela[2][2]))
         {
            disp();
            printf("PLAYER **%i** VENCEU!! \n",pl);
            teste=0;
         }
         }
         
         if(((x==0)&&(y==2))||((x==1)&&(y==1))||((x==2)&&(y==0)))
         {
         if((tela[0][2]==tela[1][1]) && (tela[0][2]==tela[2][0]))
         {
            disp();
            printf("PLAYER **%i** VENCEU!! \n",pl);
            teste=0;
         }
         }
}
void play1(void)
{
   disp();
   printf("Jogador 1: Digite a coordenada **X**: ");
   scanf("%i",&x);
   printf("Jogador 1: Digite a coordenada **Y**: ");
   scanf("%i",&y);
   pl=1;
   x--;
   y--; 
}
void play2(void)
{
   disp();      
   printf("Jogador 2: Digite a coordenada **X**: ");
   scanf("%i",&x);
   printf("Jogador 2: Digite a coordenada **Y**: ");
   scanf("%i",&y);
   pl=2;
   x--;
   y--;
}
