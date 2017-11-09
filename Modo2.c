#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void inicializaTabuleiro(int tabuleiro[][9]){
    int linha, coluna;
        for(linha=0 ; linha < 9; linha++ )
            for(coluna=0 ; coluna < 9; coluna++ )
                tabuleiro[linha][coluna]=-1;
}
void mostraTabuleiro(int tabuleiro[][9], int a, int nivel){
        int linha, coluna;
        if(a==1 && nivel==1){
        for(coluna=0;coluna<9;coluna++){
                printf("\t%d",coluna);
        }
            printf("\n");
            tabuleiro[0][1]=9;
            tabuleiro[1][5]=7;
            tabuleiro[8][8]=7;
            for(linha=0 ; linha < 9 ; linha++ ){
                printf("%c",linha+65);
                for(coluna=0 ; coluna < 9 ; coluna++ ){
                    if(tabuleiro[linha][coluna]==-1){
                        printf("\t%d",tabuleiro[linha][coluna]);
                    }
                    else{
                        printf("\t%d",tabuleiro[linha][coluna]);
                    }
                }
                printf("\n\n");
            }
        }

}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int tabuleiro[9][9];
    int nivel;
    int a;
    printf("Qual nível você deseja?\n1 - Fácil.\n2 - Intermediário.\n3 - Difícil.: ");
    scanf("%d", &nivel);
    inicializaTabuleiro(tabuleiro);
    switch (nivel){
        case 1:
            a=rand()%2;
            printf("%d",a);
             mostraTabuleiro(tabuleiro,a,nivel);
             break;
        case 2:
             a=rand()%7;
             mostraTabuleiro(tabuleiro,a,nivel);
             break;
        case 3:
             a=rand()%7;
             mostraTabuleiro(tabuleiro,a,nivel);
             break;
    }
return 0;
}
