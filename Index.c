
#include<stdio.h>
#include<stdlib.h>
#include "colors.h"


int main(){
    
    int b;
    system("cls");
    foreground(WHITE);
	int a=0;
    printf("\n\t\t\tBEM VINDO AO SUDURELLI\n\n");
    printf("============ MENU ============\n");
    printf("\n 1 - Carregue seu jogo \n 2 - Jogar Um jogo aleatorio \n 3 - Recorde \n 4 - Como Jogar? \n 5 - Instrucoes \n\n 0 - Sair");
    printf("\n==============================\n\n");
    printf("Digite sua escolha: ");
    scanf("%d", &a);
    switch (a){
        case 1:{
        
        	   system("cls");
               system("Modo1.exe");
               break;
        }
        case 2:{
        	   system("cls");
               system("Modo2.exe");
               break;
        }

        case 3:{
        	system("Record.exe");
		}
		
        case 4:{
        	system("cls");
        	 printf("\n\t\t\tCOMO JOGAR?\n");
        	 printf("=========================================================================\n\n");
        	 printf(" Um quebra-cabecas de Sudoku comeca com uma tabela \n onde alguns dos numeros ja estao no lugar, \n"
			 " dependendo da dificuldade do jogo. \n\n Um quebra-cabecas completo eh aquele em que cada numero \n"
			 " de 1 a 9 aparece apenas uma vez em cada uma das 9 linhas, \n colunas e blocos. \n\n" 
			 " Estude a tabela para encontrar os numeros q podem caber em cada celula.\n");
			 printf("=========================================================================\n\n");
			 printf("Deseja voltar ao menu? (0-Não / 1-Sim): ");
			 scanf("%d", &b);
			 if (b==1){
			 	system ("cls");
			 	
			 	return main();
			 
			 } else {
			 	printf("\n\n\t\t\tObrigado por jogar nosso jogo =D\n\n");
			 	break;
			 }
       	
		}
        case 5:{
	    	
        	system("cls");
        	 printf("\n\t\t\tCOMO JOGAR?\n");
        	 printf("=========================================================================\n\n");
        	 printf("No Modo 1 você jogara com um Sudoku gerado aleatório.\n"
				"No modo 2 você jogará com um Sudoku pronto.\n"
				"Recordes exibe os melhores tempos.\n"
				"\nOBS: para apagar o valor que você colocou previamente,\n"
				"coloque o agora com o valor de -1\n");
			 printf("=========================================================================\n\n");
			 printf("Deseja voltar ao menu? (0-Não / 1-Sim): ");
			 scanf("%d", &b);
			 if (b==1){
			 	system ("cls");
			 	
			 	return main();
			 
			 } else {
			 	printf("\n\n\t\t\tObrigado por jogar nosso jogo =D\n\n");
			 	break;
			 }
		case 0: {
			return 0;
		}
     }
 }
return 0;
}
