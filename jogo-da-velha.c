#include <stdio.h>
#include <stdlib.h>

char matrix[3][3];

char checar(void);
void matriz(void);
void movimento_jogador(void);
void moviemento_computador(void);
void che_matriz(void);

void main(void)
{
    char done;

    printf("JOGO DA VELHA\n");
    printf("Humano Vs Maquina\n");

    done = ' ';

    matriz();
    do {
        che_matriz();
        movimento_jogador(  );
        done = checar();
        if(done != ' ') break;
        moviemento_computador();
        done = checar();
    } while(done==' ');

    if(done=='X') printf("Voce ganhou!\n");
    else printf("Voce PERDEU da maquina!\n");
    che_matriz();
}

void matriz(void)
{
    int i, j;

    for(i=0;i<3;i++)
    for(j=0;j<3;j++) matrix[i][j] = ' ';
}

void movimento_jogador(void)
{
    int x, y;

    printf("Digite as coordenadas para o X: ");
    scanf("%d%d",&x,&y);

    x--; y--;

    if(matrix[x][y]!=' ') {
        printf("Posicao invalida, tente de novo!\n");
       movimento_jogador();
    }
    else matrix[x][y] = 'X';
}

void moviemento_computador(void)
{
    int i, j;

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++)
        if(matrix[i][j]==' ') break;
        if(matrix[i][j]==' ') break;
    }

    if(i*j==9) {
        printf("EMPATE!\n");
        exit(0);
    }
    else
    matrix[i][j] = 'O';
}


void che_matriz(void)
{
    int t;

    for(t=0;t<3;t++) {
        printf(" %c | %c | %c ", matrix[t][0], matrix[t][1], matrix[t][2]);
            if(t!=2) printf("\n---|---|---|\n");
    }
    printf("\n");
}


char checar(void)
{
    int i;

    for(i=0;i<3;i++)
        if(matrix[i][0]==matrix[i][1] && matrix[i][0]==matrix[i][2]) return matrix[i][0];

    for(i=0;i<3;i++)
        if(matrix[0][i]==matrix[1][i] && matrix[0][i]==matrix[2][i]) return matrix[i][0];


    if(matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][2]) return matrix[0][0];
    if(matrix[0][2]==matrix[1][1] && matrix[1][1]==matrix[2][2]) return matrix[2][0];

    return ' ';
}

//faz o scan da primeira jogada
switch ( jogada )
  {
     case 1 :
       //O jogador jogou na primeira posicao preenche a matriz com o indice do jogador
        //pc joga no meio por exemplo;
       //Aqui pode ate imprimir a matriz com o preenchimento ate agora
        //faz o scan da segunda jogada do jogador
        switch ( jogada ){
                //repita ate o jogo acabar
        }
     break;
 
     case 2 :
       
     break;
 
     case 3 :
        
     break;
 
     case 4 :
        
     break;
 
     case 5 :
       
     break;
 
     case 6 :
       
     break;
 
     case 7 :
       
     break;
        
    case 8 :
        
     break;
        
    case 9 :
        
     break;
  }
