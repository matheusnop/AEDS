#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
void inicializaTabuleiro(int tabuleiro[][9]){ //inicializa o tabuleiro
    int linha, coluna;
        for(linha=0;linha<9;linha++ )
            for(coluna=0;coluna<9;coluna++ )
                tabuleiro[linha][coluna]=-1;
}
void mostraTabuleiro(int tabuleiro[][9], int a, int nivel){ //funcao para mostra o tabuleiro
        int linha, coluna;
        if(a==0 && nivel==1){
            for(coluna=0;coluna<9;coluna++){
                printf("\t%c",coluna+65);
            }
            printf("\n");
            { // inicia o tabuleiro
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
            }
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
        if(a==1 && nivel==1){
            for(coluna=0;coluna<9;coluna++){
                printf("\t%c",coluna+65);
            }
            printf("\n");
            tabuleiro[0][0]=9;
            tabuleiro[1][0]=4;
            tabuleiro[2][0]=6;
            tabuleiro[0][1]=1;
            tabuleiro[2][1]=5;
            tabuleiro[0][2]=7;
            tabuleiro[1][2]=2;
            tabuleiro[0][3]=2;
            tabuleiro[0][4]=5;
            tabuleiro[1][4]=8;
            tabuleiro[0][5]=4;
            tabuleiro[2][5]=3;
            tabuleiro[2][6]=9;
            tabuleiro[4][0]=5;
            tabuleiro[5][0]=2;
            tabuleiro[3][2]=2;
            tabuleiro[4][3]=7;
            tabuleiro[3][4]=9;
            tabuleiro[5][5]=5;
            tabuleiro[3][6]=2;
            tabuleiro[4][6]=3;
            tabuleiro[3][7]=5;
            tabuleiro[5][7]=7;
            tabuleiro[3][8]=6;
            tabuleiro[4][8]=9;
            tabuleiro[5][8]=1;
            tabuleiro[7][0]=3;
            tabuleiro[6][1]=2;
            tabuleiro[6][2]=7;
            tabuleiro[6][3]=5;
            tabuleiro[7][3]=1;
            tabuleiro[6][4]=3;
            tabuleiro[7][4]=6;
            tabuleiro[6][6]=8;
            tabuleiro[6][7]=6;
            tabuleiro[7][7]=9;
            tabuleiro[8][7]=3;
            tabuleiro[7][8]=8;
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
        if (a==2 && nivel==1){
            for(coluna=0;coluna<9;coluna++){
                printf("\t%c",coluna+65);
            }
            printf("\n");
            tabuleiro[0][0]=6;
            tabuleiro[1][1]=4;
            tabuleiro[2][2]=8;
            tabuleiro[0][3]=3;
            tabuleiro[0][4]=7;
            tabuleiro[0][4]=5;
            tabuleiro[2][4]=2;
            tabuleiro[0][7]=1;
            tabuleiro[0][8]=4;
            tabuleiro[1][7]=7;
            tabuleiro[1][8]=3;
            tabuleiro[3][0]=4;
            tabuleiro[3][2]=7;
            tabuleiro[4][1]=8;
            tabuleiro[5][2]=2;
            tabuleiro[3][3]=9;
            tabuleiro[3][4]=6;
            tabuleiro[5][4]=5;
            tabuleiro[5][5]=1;
            tabuleiro[5][6]=4;
            tabuleiro[3][7]=2;
            tabuleiro[4][7]=9;
            tabuleiro[5][8]=6;
            tabuleiro[7][0]=9;
            tabuleiro[8][0]=2;
            tabuleiro[8][3]=5;
            tabuleiro[6][4]=9;
            tabuleiro[8][4]=3;
            tabuleiro[6][6]=1;
            tabuleiro[7][7]=3;
            tabuleiro[8][8]=8;
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
        if (a==0 && nivel==2){
            for(coluna=0;coluna<9;coluna++){
                printf("\t%c",coluna+65);
            }
            printf("\n");
            tabuleiro[0][0]=3;
            tabuleiro[0][1]=2;
            tabuleiro[0][2]=6;
            tabuleiro[1][0=5;
            tabuleiro[0][3]=8;
            tabuleiro[1][3]=2;
            tabuleiro[3][6]=7;
            tabuleiro[0][7]=2;
            tabuleiro[0][8]=7;
            tabuleiro[1][8]=6;
            tabuleiro[2][8]=2;
            tabuleiro[3][2]=2;
            tabuleiro[5][0]=6;
            tabuleiro[5][1]=8;
            tabuleiro[3][3]=5;
            tabuleiro[3][5]=8;
            tabuleiro[5][5]=2;
            tabuleiro[3][7]=9;
            tabuleiro[3][8]=4;
            tabuleiro[5][6]=1;
            tabuleiro[8][8]=8;
            tabuleiro[6][0]=1;
            tabuleiro[7][0]=2;
            tabuleiro[8][0]=8;
            tabuleiro[8][1]=6;
            tabuleiro[6][3]=4;
            tabuleiro[7][5]=1;
            tabuleiro[8][5]=9;
            tabuleiro[8][6]=7;
            tabuleiro[8][7]=5;
            tabuleiro[8][8]=1;
            tabuleiro[7][8]=9;
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
        if (a==2 && nivel==2){
            for(coluna=0;coluna<9;coluna++){
                printf("\t%c",coluna+65);
            }
            printf("\n");
            tabuleiro[0][0]=1;
            tabuleiro[0][2]=3;
            tabuleiro[1][1]=5;
            tabuleiro[2][1]=2;
            tabuleiro[0][3]=4;
            tabuleiro[1][4]=8;
            tabuleiro[2][4]=6;
            tabuleiro[1][6]=1;
            tabuleiro[1][7]=3;
            tabuleiro[0][8]=2;
            tabuleiro[2][8]=7;
            tabuleiro[6][0]=6;
            tabuleiro[5][1]=3;
            tabuleiro[5][2]=4;
            tabuleiro[3][3]=2;
            tabuleiro[3][5]=4;
            tabuleiro[5][3]=8;
            tabuleiro[5][5]=7;
            tabuleiro[4][6]=2;
            tabuleiro[4][7]=7;
            tabuleiro[3][8]=3;
            tabuleiro[6][0]=5;
            tabuleiro[8][0]=2;
            tabuleiro[7][1]=9;
            tabuleiro[7][2]=6;
            tabuleiro[6][4]=2;
            tabuleiro[7][4]=5;
            tabuleiro[8][5]=9;
            tabuleiro[8][5]=3;
            tabuleiro[6][7]=8;
            tabuleiro[7][7]=2;
            tabuleiro[8][8]=1;
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
    void pegaValores(int valor[3]){ //funcao que pega valores e confere se sao validos
    printf("Digite a linha: ");
    scanf("%d",&valor[0]);
    printf("\nDigite a coluna: ");
    scanf("%d",&valor[1]);
    printf("\nValor: ");

    scanf("%d",&valor[2]);
    if (valor[0]<0 || valor[0]>9){
        printf("\nLinha inválida, por favor digite numeros entre 1 e 9\n");
        pegaValores(valor);
    }
    if (valor[1]<0 || valor[1]>9){
        printf("\nLinha inválida, por favor digite numeros entre 1 e 9\n");
        pegaValores(valor);
    }
    valor[0]--;
    valor[1]--;
    if (valor[2]<-1 || valor[2]>9){
        printf("\nValor inválido, por favor digite numeros entre 1 e 9\n");
        pegaValores(valor);
    }
}
int confere(int tabuleiro[][9],int valor[3]){ //conferindo se os valores da coluna y e linha x ja foram digitados ou nao
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
int main(){
    //setlocale(LC_ALL, "Portuguese");
    int tabuleiro[9][9];
    int nivel;
    int a, horas=0, minutos=0, segundos=0;
    int corrigir=0;
    int valor[3];
    printf("Qual nivel voce deseja?\n1 - Facil.\n2 - Intermediário.\n3 - Dificil.: ");
    scanf("%d", &nivel);
    printf("\nPara sair digite o valor zero quando for inserir o valor no Soduku.\n");
    inicializaTabuleiro(tabuleiro);
    switch (nivel){
        case 1:
            printf("\n\t\t\t\t\tBem vindo, boa sorte, bom jogo!!!\n");
            a=rand()%2; // sorteio de sudoku
            do{
                mostraTabuleiro(tabuleiro,a,nivel);
                pegaValores(valor);
                confere(tabuleiro,valor);
                if (valor[2]==0){
                    printf("Deseja finalizar o Jogo? 0 - Não, 1 - Sim: ");
                    scanf("%d",&corrigir);
                }
            } while (corrigir!=1);
                if (corrigir==1){
                    break;
                }
            break;
        case 2:
             a=rand()%3;
             mostraTabuleiro(tabuleiro,a,nivel);
             break;
        case 3:
             a=rand()%3;
             mostraTabuleiro(tabuleiro,a,nivel);
             break;
    }
return 0;
}
