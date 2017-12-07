
// ------------------ NESSE ARQUIVO OCORRE O CARREGAMENTO E ARMAZENAMENTO DOS RECORDES ------------------

#include <stdio.h>
#include <stdlib.h>
#define tam 3


struct record{
	char nome[100];
	float tempo;
};

struct pega_record{
	char nome[100];
	float tempo;
};


void gravar_record(struct pega_record pega_record[tam], float time){
	FILE *arq = fopen("record.txt", "r+");
	if((arq = fopen("C:\\Users\\mathe\\Desktop\\AEDS-master\\AEDS-master\\record.txt", "r+"))==NULL){ 

         printf("Problemas na abertura do arquivo\n");
         printf("Arquivo nao encontrado\n");
                  
     }
     
     printf("\nNome: ");
     fgets(pega_record[0].nome, tam, stdin);
     pega_record[0].tempo = time;
     
}


void carrega_record(struct record record[tam]){
int i;

FILE *arq = fopen("record.txt", "r+");	

for(i=0; i<tam; i++){	
fscanf(arq, "%s", &record[i].nome);	
fscanf(arq, "%f", &record[i].tempo);
}


}


void ler_record(struct record record[tam]){
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
			exit;
		}

}

int main(){

struct record record[tam];
struct pega_record pega_record[1];

system("cls");
carrega_record(record);



ler_record(record);

}


