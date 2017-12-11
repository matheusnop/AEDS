
// ------------------ NESSE ARQUIVO OCORRE O ARMAZENAMENTO DOS RECORDES ------------------

#include <stdio.h>
#include <stdlib.h>
#include "colors.h"
#define tam 3


struct time{
	int tempo;
};

struct record{
	char nome[100];
	int tempo;
};


void gravar_record(struct record record[tam]){
	
	int i,j;
	FILE *arq = fopen("record.txt", "w");	
	if(arq==NULL){ 
         printf("Problemas na abertura do arquivo\n");
         printf("Arquivo nao encontrado\n");
                  
    } else{

	for(i=0; i<tam; i++){
		for(j=0; j<strlen(record[i].nome); j++){
			fputc(record[i].nome[j], arq);
		}
		fprintf(arq, " %d\n\n", record[i].tempo);		
	}
 
     printf("\nRecord Atualizado");
     sleep(2);
 
	 }
     
	
fclose(arq);

system("./Record");
}	


void pegar_record_novo(struct time time[1], struct record record[tam], int i){
	
     setbuf(stdin, NULL);
     printf("\nPARABENS NOVO RECORD, DIGITE O SEU PRIMEIRO NOME");
     printf("\nNome: ");
     fgets(record[i].nome, 100, stdin);
     record[i].tempo = time[1].tempo;

    gravar_record(record);
    
     
}

	
void carrega_record(struct record record[tam], struct time time[1]){
int i;

FILE *arq = fopen("record.txt", "r+");
FILE *arq1 = fopen("recorde.txt", "r+");	

	if(arq==NULL||arq1==NULL){ 

         printf("Problemas na abertura do arquivo\n");
         printf("Arquivo nao encontrado\n");
                  
     } else{
     	
     		fscanf(arq1, "%d", &time[1].tempo);
     		
			for(i=0; i<tam; i++){	
			fscanf(arq, "%s", &record[i].nome);	
			fscanf(arq, "%d", &record[i].tempo);
			}
			
		}
	fclose(arq);
	fclose(arq1);
}

void compara_record (struct time time[1], struct record record [tam]){

	int i, a;
	for(i=0; i<tam; i++){
		if (time[1].tempo < record[i].tempo){
			pegar_record_novo(time, record, i);
			break;
		}
	}
	printf("\n\n\tDeseja jogar novamente? (0 - Nao / 1 - Sim): ");
    scanf("%d", &a);
    if(a==1){
    	printf("\e[H\e[2J");
    	system("./Index");
	}
	else{
		exit(0);
	}	
}


int main(){
foreground(WHITE);
struct time time[1];
struct record record[tam];

printf("\e[H\e[2J");

carrega_record(record, time);
compara_record(time, record);

}
