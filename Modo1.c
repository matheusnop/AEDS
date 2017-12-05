
// ------------------ NESSE ARQUIVO OCORRE O CARREGAMENTO DO JOGO PELO USU�RIO ------------------

#include<stdio.h>
#include<stdlib.h>
#include "colors.h"
#define tam 9

void inicializaTabuleiro(int tabuleiro[][tam],  int tabuleiro1[][tam], int nivel){ //fun��o que inicializa o jogo do usu�rio

int linha, coluna,num, i, j;;
     FILE *arq = fopen("sudoku.txt", "r");
     if((arq = fopen("C:\\Users\\mathe\\Desktop\\AEDS-master\\AEDS-master\\sudoku.txt", "r"))==0){ 

         printf("Problemas na abertura do arquivo\n");
         printf("Arquivo nao encontrado\n");
                  
     } else{
 	 	printf("\n\t\t\tCARREGANDO O JOGO");
 	 	sleep(1);
 	 	printf(".");
    	sleep(1);
 	 	printf(".");
 	 	sleep(1);
 	 	printf(".");
 	 	sleep(1);
 	 	system("cls");
		printf("\n\t\t\tJOGO ADICIONADO COM SUCESSO\n\t\t\t\tBOA SORTE! =)");
		sleep(1);
		system("cls");
		
     		for(linha=0; linha<tam; linha++){
         		for(coluna=0; coluna<tam; coluna++){
             	 	fscanf(arq, "%3d", &tabuleiro[linha][coluna]);
        		}    
			}
			
			for(linha=0; linha<tam; linha++){
         		for(coluna=0; coluna<tam; coluna++){
             	 	tabuleiro1[linha][coluna]=tabuleiro[linha][coluna];
        		}    
			}
			//Aqui sorteia as posi��es q ser�o "apagadas" 
				if(nivel==1){
					srand(time(NULL));
						for(num=0; num<41; num++){
							i=rand()%9;
							j=rand()%9;
							tabuleiro[i][j]=-1;
						}
						
				} else if (nivel==2){
					srand(time(NULL));
						for(num=0; num<60; num++){
							i=rand()%9;
							j=rand()%9;
							tabuleiro[i][j]=-1;
						}
						
				} else if(nivel ==3){
					srand(time(NULL));
						for(num=0; num<68; num++){
							i=rand()%9;
							j=rand()%9;
							tabuleiro[i][j]=-1;
						}		
					}
 		}	 
		 fclose(arq);
}
	

void mostraTabuleiro(int tabuleiro[][tam]){//fun��o que mostra o arquivo carregado

	int linha, coluna;
	system("cls");

    for(linha=0; linha<tam; linha++){
    	if(linha==0){
    	printf("\n| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |\n");
		}
		printf("\n+---+---+---+---+---+---+---+---+---+  ===\n");
        printf("|");
         	for(coluna=0; coluna<tam; coluna++){
         		/*if(linha==0){
         			printf("\n| 1 \n| 2 \n| 3 \n| 4 \n| 5 \n| 6 \n| 7 \n| 8 \n| 9 ");
				 }*/
         		if(tabuleiro[linha][coluna]!=-1){
                        printf("%2d |", tabuleiro[linha][coluna]);
                    }
                     else{
                        printf("   |", tabuleiro[linha][coluna]);
                    }
        	} 
			 printf("\t%c",linha+49);  
		}
			printf("\n+---+---+---+---+---+---+---+---+---+  ===\n");
	}
	  

void pegaValores(int valor[3]){ //funcao que pega valores e confere se sao validos
    printf("Digite a linha: ");
    scanf("%d",&valor[0]);
    printf("\nDigite a coluna: ");
    scanf("%d",&valor[1]);
    printf("\nValor: ");
    scanf("%d",&valor[2]);
    if (valor[0]<0 || valor[0]>tam){
        printf("\nLinha invalida, por favor digite numeros entre 1 e 9\n");
        pegaValores(valor);
    }
    if (valor[1]<0 || valor[1]>tam){
        printf("\nColuna invalida, por favor digite numeros entre 1 e 9\n");
        pegaValores(valor);
    }
    valor[0]--;
    valor[1]--;
    if (valor[2]<-1 || valor[2]>tam){
        printf("\nValor invalido, por favor digite numeros entre 1 e 9\n");
        pegaValores(valor);
    }
}
int confere(int tabuleiro[][tam],int valor[3]){ //conferindo se os valores da coluna y e linha x ja foram digitados ou nao
    int linha=valor[0];
    int coluna=valor[1];
    int valornovo=valor[2];
    if(tabuleiro[linha][coluna]==-1){
        tabuleiro[linha][coluna]=valornovo;
        return (tabuleiro);
    }
    else{
        tabuleiro[linha][coluna]=valornovo;
    }
}

int compara(int tabuleiro[][tam], int tabuleiro1[][tam], int valor[3]){ //conferindo se o jogo esta correto.
    int linha=valor[0];
    int coluna=valor[1];
    int valornovo=valor[2];
    if(tabuleiro[linha][coluna]==tabuleiro1[linha][coluna]){
        foreground(GREEN);
        tabuleiro[linha][coluna];
        return (tabuleiro);
    }
    else{
    	foreground(RED);
        tabuleiro[linha][coluna];
    }
}

int comparacaofinal(int tabuleiro[][tam], int tabuleiro1[][tam]){ //conferindo no final se o jogo esta correto.
    int linha, coluna, a=0, b;
    for(linha=0; linha<tam; linha++){
    	for(coluna=0; coluna<tam; coluna++){
    		if(tabuleiro[linha][coluna]==tabuleiro1[linha][coluna]){
        	a++;
    		}	
		}
	}
    if(a==81){
    	system("cls");
    	printf("Parabens jogo completado com sucesso!!! =D");
    	printf("\nDeseja jogar novamente? (0 - N�o / 1 - Sim): ");
    	scanf("%d", &b);
    	if(b==1){
    		return main();
		}
		else{
			return 0;
		}
		
	} 
	else{
    	return (tabuleiro);
    }
}

int main(){
	
	int tabuleiro[tam][tam];
	int tabuleiro1[tam][tam];
	int nivel;
    int horas=0, minutos=0, segundos=0;
    
	int corrigir=0;
    int valor[3];
    
    int linha, coluna;
    
    printf("Qual nivel voce deseja?\n1 - Facil.\n2 - Intermediario.\n3 - Dificil.: ");
    scanf("%d", &nivel);
    printf("\nPara sair digite o valor zero quando for inserir o valor no Soduku.\n");
    
    inicializaTabuleiro(tabuleiro, tabuleiro1, nivel);
   
    do{
       mostraTabuleiro(tabuleiro);
   	   pegaValores(valor);
       confere(tabuleiro,valor);
       compara(tabuleiro, tabuleiro1, valor);
       
       
          if (valor[2]==0){
              printf("Deseja finalizar o Jogo? 0 - N�o, 1 - Sim: ");
              scanf("%d",&corrigir);
              if(corrigir == 0){
              	printf("\nValor invalido, por favor digite numeros entre 1 e 9\n");
              	sleep(2);
              	mostraTabuleiro(tabuleiro);
              	pegaValores(valor);
			  }
          }
          
          
    	comparacaofinal(tabuleiro, tabuleiro1);
                
    } while (corrigir!=1);
               

return 0;
}
