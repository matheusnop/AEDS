
// ------------------ NESSE ARQUIVO OCORRE O CARREGAMENTO E ARMAZENAMENTO DOS RECORDES ------------------

#include <stdio.h>
#include <stdlib.h>
#define tam 3


struct record{
	char nome[100];
	float tempo;
};


void gravarrecord(struct record record[tam]){
	
}


void carregarecord(struct record record[tam]){
int i;

FILE *arq = fopen("record.txt", "r+");	

for(i=0; i<tam; i++){	
fscanf(arq, "%s", &record[i].nome);	
fscanf(arq, "%f", &record[i].tempo);
}
}


void lerrecord(struct record record[tam]){
	int i, b;
	
	printf("\n=========== RECORD ===========");
	
	for(i=0; i<tam; i++){
			
		printf("\n\n Nome :%s\n", record[i].nome);	
		printf(" Tempo de jogo: %.2f\n", record[i].tempo);
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
			return 0;
		}

}

int main(){

struct record record[tam];

system("cls");
carregarecord(record);



lerrecord(record);

}


