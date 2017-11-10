#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    system("color 0");
    FILE *chamador;
    chamador=fopen("teste.txt","r");
    int a=0;
    printf("Bem vindo ao SuduDurelli, escolha uma das opces abaixo: ");
    printf("\n 1 - Modo 1 \n 2 - Modo 2 \n 3 - Recorde \n 4 - Instrucoes.");
    scanf("%d",&a);
    switch (a){
        case 1:
               system("\"C:\\Users\\cliente\\Documents\\GitHub\\AEDS\\Modo1.exe\"");
               break;
        case 2:
               system("\"C:\\Users\\cliente\\Documents\\GitHub\\AEDS\\Modo2.exe\"");
               break;

        case 3:

                break;
        case 4:
                printf("No Modo 1 você jogara com um Sudoku gerado aleatório.\nNo modo 2 você jogará com um Sudoku pronto.\n Recordes.\n OBS: o ");
    }

return 0;
}
