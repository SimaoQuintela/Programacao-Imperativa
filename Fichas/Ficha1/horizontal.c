#include <stdio.h>
#include <stdlib.h>

void main(){
    // declarar variáveis
    int i, j, n, linhas, square;
    // pedir a dimensão ao utilizador
    printf("Insira a dimensao que deseja: ");
    scanf("%d", &n);
    square = 1;
    linhas = n;

    for(i=1; i<= n; i++){               // i tem o papel de linha e j o papel de coluna
        for(j=1; j<linhas; j++) {       // este for destina-se a colocar no triangulo os espaços vazios, para isso criei a variável linhas que faz o mesmo papel de n
            putchar(' ');               // no entanto queria altera-la sem alterar o valor de n que está a ser usado na linha anterior, daí ter criado uma nova variável
        }
        linhas--;
            for(j=1; j<=square; j++){  // este for destina-se a colocar no triângulo os #, reparei que à medida que se muda de linha aumentam 2# então à medida que ia
                putchar('#');          // progredindo aumentava 2 unidades ao square (criei a varável square para fazer o papel de #)
            }
            printf("\n");
            square = square +2;
    }
    system("pause");
}
