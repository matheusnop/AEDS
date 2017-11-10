#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void inicializaTabuleiro(int tabuleiro[][9]){ //inicializa o tabuleiro
    int linha, coluna;
        for(linha=0;linha<9;linha++ )
            for(coluna=0;coluna<9;coluna++ )
                tabuleiro[linha][coluna]=-1;
}
void mostraTabuleiro(int tabuleiro[][9], int a, int nivel){ //funcao para mostra o tabuleiro
        int linha, coluna;
        if(a==1 && nivel==1){
            for(coluna=0;coluna<9;coluna++){
                printf("\t%c",coluna+65);
            }
            printf("\n");
            tabuleiro[0][1]=4;
            tabuleiro[1][0]=5;
            tabuleiro[1][1]=3;
            tabuleiro[2][2]=7;
            tabuleiro[0][5]=7;
            tabuleiro[1][4]=9;
            tabuleiro[2][4]=6;
            tabuleiro[0][6]=1;
            tabuleiro[1][7]=7;
            tabuleiro[2][7]=4;
            tabuleiro[2][6]=9;
            tabuleiro[3][0]=4;
            tabuleiro[3][2]=6;
            tabuleiro[4][1]=1;
            tabuleiro[5][1]=5;
            tabuleiro[5][2]=3;
            tabuleiro[3][4]=8;
            tabuleiro[5][4]=1;
            tabuleiro[3][6]=7;
            tabuleiro[3][7]=5;
            tabuleiro[3][8]=1;
            tabuleiro[6][1]=6;
            tabuleiro[7][4]=9;
            tabuleiro[8][5]=9;
            tabuleiro[6][0]=9;
            tabuleiro[7][0]=3;
            tabuleiro[8][0]=1;
            tabuleiro[6][1]=6;
            tabuleiro[7][1]=7;
            tabuleiro[8][3]=2;
            tabuleiro[6][4]=3;
            tabuleiro[7][4]=5;
            tabuleiro[7][5]=1;
            tabuleiro[8][6]=3;
            tabuleiro[6][7]=1;
            tabuleiro[8][7]=6;
            tabuleiro[8][8]=7;
            for(linha=0 ; linha < 9 ; linha++ ){
                printf("%c",linha+65);
                for(coluna=0 ; coluna < 9 ; coluna++ ){
                    if(tabuleiro[linha][coluna]!=-1){
                        printf("\t%d",tabuleiro[linha][coluna]);
                    }
                     else{
                        printf("\t",tabuleiro[linha][coluna]);
                    }
                }
                printf("\n\n");
            }
        }
}
int pegaValores(int valor[3]){
    printf("Digite a linha: ");
    scanf("%d",&valor[0]);
    printf("\nDigite a coluna: ");
    scanf("%d",&valor[1]);
    printf("\nValor: ");
    scanf("%d",&valor[2]);
    return valor[2];
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int tabuleiro[9][9];
    int nivel;
    int a;
    int corrigir=0;
    int valor[3];
    printf("Qual nível você deseja?\n1 - Fácil.\n2 - Intermediário.\n3 - Difícil.: ");
    scanf("%d", &nivel);
    printf("\n\t\t\t\tPara sair digite o valor zero quando for inserir o valor no Soduku.\n");
    inicializaTabuleiro(tabuleiro);
    switch (nivel){
        case 1:
            printf("\nBem vindo, boa sorte, bom jogo\n");
            a=rand()%2; // sorteio de sudoku
            do{
                mostraTabuleiro(tabuleiro,a,nivel);
                pegaValores(valor);
                printf("%d",valor[0]);
                if (valor[2]==0){
                    printf("Deseja finalizar o Jogo? 0 - Não, 1 - Sim: ");
                    scanf("%d",&corrigir);
                    break;
                }
            } while (corrigir!=1);
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
