#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
#include<locale.h>
void record(){
	FILE *p;
	int v[2],i=0;
	p=fopen("recorde.txt","r");
	while(!feof(p)){
		fscanf(p,"%d",&v[i]);
		i++;
		}
	printf("Primeiro: %d segundos\nSegundo: %d segundos\n", v[0],v[1]);

	}

int main(){
    setlocale(LC_ALL, "Portuguese");
    //system("color 0");

    int a=0,b=0;
    printf("\e[H\e[2J");
    printf("Bem vindo ao SuduDurelli, escolha uma das opces abaixo: ");
    printf("\n 1 - Modo 1 \n 2 - Modo 2 \n 3 - Recorde \n 4 - Instrucoes.");
    scanf("%d",&a);
    switch (a){
        case 1:
               system("./Modo1");//LINUX
               break;
        case 2:
               system("./Modo2");//LINUX
               break;

        case 3:
				record();
				printf("1-Voltar 0-SAIR ");
				scanf("%d", &b);
				 if(b==1){main();}
				 else{return 0;}
                break;
        case 4:
                printf("No Modo 1 você jogara com um Sudoku gerado aleatório.\nNo modo 2 você jogará com um Sudoku pronto.\nRecordes exibe os melhores tempos.\nOBS: para apagar o valor que você colocou previamente, coloque o agora com o valor de -1\n");
                main();
    }
return 0;
}
