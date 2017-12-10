
// ------------------ NESSE ARQUIVO OCORRE O CARREGAMENTO DOS RECORDES ------------------

#include <stdio.h>
#include <stdlib.h>
#define tam 3


struct record{
	char nome[100];
	int tempo;
};


void carrega_record( struct record record[tam]){
	int i;

	FILE *arq = fopen("record.txt", "r");	

	for(i=0; i<tam; i++){	
		fscanf(arq, "%s", &record[i].nome);	
		fscanf(arq, "%d", &record[i].tempo);

	}

}



void ler_record(struct record record[tam]){
	int i, b;
	
	printf("\n=========== RECORD ===========");
	
	for(i=0; i<tam; i++){
			
		printf("\n\n Nome: %s\n", record[i].nome);	
		printf(" Tempo de jogo: %d Segundos\n", record[i].tempo);
		printf("-----------------------\n");
	}
	
	printf("\n==============================\n\n");
	
	printf("Deseja voltar ao menu? (0 - Nao / 1 - Sim): ");
	
    	scanf("%d", &b);
    	
    	if(b==1){
    	system("cls");
    	system("\"C:\\Users\\mathe\\Downloads\\AEDS-Sudoku-master\\AEDS-Sudoku-master\\AEDS-master\\Index.exe\"");
		}
		else{
			exit;
		}

}

int main(){

int time = 0;
struct record record[tam];


system("cls");
carrega_record(record);

ler_record(record);

}


