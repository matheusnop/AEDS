
// ------------------ MODO 2 ------------------
#include <unistd.h>//LINUX
#include <stdio.h>
#include <stdlib.h>
#include "colors.h"
#include <time.h>

#define tam 9
int inicio=0,fim=0;


void inicializaTabuleiro(int tabuleiro[][tam],  int tabuleiro1[][tam], int nivel){ //função que inicializa o jogo do usuário

int linha, coluna,num, i, j,aleat=0;
FILE *arq;
	srand(time(NULL));
		
		aleat=rand()%100;
		
		if(aleat%2==0){
		arq=fopen("sudoku1.txt", "r");
			if((arq = fopen("sudoku1.txt", "r"))!=0){goto abriu;}
		}
		if(aleat%3==0){
		arq=fopen("sudoku2.txt", "r");
			if((arq = fopen("sudoku2.txt", "r"))!=0){goto abriu;}
		}
		if(aleat%5==0){
		arq=fopen("sudoku3.txt", "r");
			if((arq = fopen("sudoku3.txt", "r"))!=0){goto abriu;}
		}
		else{
		arq=fopen("sudoku4.txt", "r");
			if((arq = fopen("sudoku4.txt", "r"))!=0){goto abriu;}
		}
		
		printf("Problemas na abertura do arquivo\n");
        printf("Arquivo nao encontrado\n");
        exit(1);
        
        abriu:    
 	 	
 	 	printf("\n\t\t\tCARREGANDO O JOGO");
 	 	sleep(1);
 	 	printf(".");
    	sleep(1);
 	 	printf(".");
 	 	sleep(1);
 	 	printf(".");
 	 	sleep(1);
 	 	printf("\e[H\e[2J");//LINUX
		printf("\n\t\t\tJOGO ADICIONADO COM SUCESSO\n\t\t\t\tBOA SORTE! =)");
		sleep(1);
		printf("\e[H\e[2J");
			inicio=(int)time(NULL);
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
			//Aqui sorteia as posições q serão "apagadas" 
				if(nivel==1){
					srand(time(NULL));
						for(num=0; num<41; num++){
							i=rand()%7;//acho que sao bons valores de dificuldade
							j=rand()%7;
							tabuleiro[i][j]=-1;
						}
						
				} else if (nivel==2){
					srand(time(NULL));
						for(num=0; num<60; num++){
							i=rand()%8;
							j=rand()%8;
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
 			 
		 fclose(arq);
}
	

void mostraTabuleiro(int tabuleiro[][tam]){//função que mostra o arquivo carregado

	int linha, coluna;
	printf("\e[H\e[2J");//LINUX

    for(linha=0; linha<tam; linha++){
    	if(linha==0){
    	printf("\n| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |");
		}
			if(linha%3==0){
				printf("\n+===+===+===+===+===+===+===+===+===+  ===\n");
				}
			else{
		printf("\n+---+---+---+---+---+---+---+---+---+  ===\n");
	}
        printf("|");
         	for(coluna=0; coluna<tam; coluna++){
         		/*if(linha==0){
         			printf("\n| 1 \n| 2 \n| 3 \n| 4 \n| 5 \n| 6 \n| 7 \n| 8 \n| 9 ");
				 }*/
         		if(tabuleiro[linha][coluna]!=-1){
                        printf("%2d |", tabuleiro[linha][coluna]);
                    }
                     else{
                        printf("   |");
                    }
        	} 
			 printf("\t%c",linha+49);  
		}
			printf("\n+===+===+===+===+===+===+===+===+===+  ===\n");
	}
	  

void pegaValores(int valor[3]){ //funcao que pega valores e confere se sao validos
   
    printf("Digite a linha: ");
    scanf("%d",&valor[0]);
    printf("Digite a coluna: ");
    scanf("%d",&valor[1]);
    printf("Valor: ");
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
        return tabuleiro[linha][coluna]=valornovo;
    }
	

}

void compara(int tabuleiro[][tam], int tabuleiro1[][tam], int valor[3]){ //conferindo se o jogo esta correto.
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
    	printf("\e[H\e[2J");//AQUI
    	fim=(int)time(NULL);
    	printf("Parabens jogo completado com sucesso!!! =D");
    	printf("\nDeseja jogar novamente? (0 - Não / 1 - Sim): ");
    	scanf("%d", &b);
    	if(b!=0){
    	
    		main();
		}
		else{
			return 0;
		}
		
	} 
	
    return 1;
}

int recorde(int tempo){
	FILE *p;
	int *rec,i=0,sinal=0;
	rec=(int*) malloc(5*sizeof(int));
	p=fopen("recorde.txt", "r");
	
	while(!feof(p)){
		fscanf(p,"%d", &rec[i]);
		i++;
		}
	fclose(p);
	for(int j=0;j<i-1;j++){
		if(rec[j]>tempo){
			rec[j+1]=rec[j];
			rec[j]=tempo;
			sinal=j+1;
			break;
			}
		}
	if(sinal!=0){
	p=fopen("recorde.txt", "w");
	for(int j=0;j<i-1;j++){
		fprintf(p,"%d\n",rec[j]);
		}
	fclose(p);
	
	printf("Recorde atingido!!!\nPosicao: %d", sinal);
	//for(int j=0;j<i-1;j++){printf(" %d ",rec[j]);}
	
		}
	return 0;
	}


int main(){
	
	int tabuleiro[tam][tam];
	int tabuleiro1[tam][tam];
	int nivel;

    
	int corrigir=0;
    int valor[3];
    
    int linha, coluna;
    
    printf("Qual nivel voce deseja?\n1 - Facil.\n2 - Intermediario.\n3 - Dificil.: ");
    scanf("%d", &nivel);
    printf("\nPara sair digite o valor zero quando for inserir o valor no Sudoku.\n");
    
    
    
    inicializaTabuleiro(tabuleiro, tabuleiro1, nivel);
    do{
       mostraTabuleiro(tabuleiro);
   	   pegaValores(valor);
       confere(tabuleiro,valor);
       compara(tabuleiro, tabuleiro1, valor);
       
       
          if (valor[2]==0){
              printf("Deseja finalizar o Jogo? 0 - Não, 1 - Sim: ");
              scanf("%d",&corrigir);
              if(corrigir == 0){
              	printf("\nValor invalido, por favor digite numeros entre 1 e 9\n");
              	sleep(2);
              	mostraTabuleiro(tabuleiro);
              	pegaValores(valor);
			  }
          }
          
        if(comparacaofinal(tabuleiro, tabuleiro1)==0){goto label;}//importante
        
    	comparacaofinal(tabuleiro, tabuleiro1);
          
    } while (corrigir!=1);
    
    label:
	printf("TEMPO %d\n",(fim - inicio));
	recorde(fim-inicio);
	//CHAMAR FUNCAO RECORDE COM ESSE PARAMETRO
	//pega_recorde (fim - inicio);
	
return 0;
}
