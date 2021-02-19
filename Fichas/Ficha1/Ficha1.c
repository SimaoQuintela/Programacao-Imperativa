#include <stdio.h>
#include <stdlib.h>
    // 1
    // 1.
    /* a variável x assume o valor de x * y ou seja 3 x 4 = 12
    a variável y assume o valor atual de x + o valor inicial de y
    y = 12 + 4 = 16
    Por fim, vão ser imprimidos os números 12 e 16
void main(){
    int x, y;
    x = 3; y = x+1;
    x = x*y;
    y = x + y;
    printf("%d %d\n", x, y);

    system("pause");
} */


    //2.
    /* vai dar erro porque declaramos y, aplicamos y no printf mas
    não lhe demos um valor */

    //3.
    /* o output vai ser
      A 65
      B 66 2 50
      b 98 */
/*
int main(){
    char a, b, c;
    a = 'A'; b = ' '; c = '0';
    printf("%c %d\n", a, a);

    a = a+1; c = c+2;
    printf ("%c %d %c %d\n", a, a, c, c);

    c = a + b;
    printf("%c %d\n",c ,c);

    system("pause");
    return 0;
}
*/

    //4.
    /* Output -> 100 200 */
    /*
void main () {
    int x, y;
    x = 200; y = 100;
    x = x+y; y = x-y; x = x-y;
    printf("%d %d\n", x, y);

    system("pause");
}
*/

    //5.
    // output -> 128 -99
             //  129 -99
/*
void main(){
    int x, y;
    x = 100; y = 28;
    x += y; y -= x;
    printf("%d %d\n", x++, ++y);
    printf("%d %d\n", x, y);

    system("pause");
}
*/


    // 2 - Estruturas de controlo
    // 1.
    // a)
    /* Output -> 3 5
    Como a condição  x > y não se verifica
    y mantém o seu valor original */

    // b)
    // Output -> 11 66
/*
void main(){
    int x, y;
    x = y = 0;
    while(x != 11) {
        x = x+1; y += x;
    }
    printf("%d %d\n", x, y);
}
*/
    // c)
    /* Output -> 10 30  */
/*
void main(){
    int x, y;
    y = 0;
    x = y ;
    while ( x != 11 ){
        x = x+2;
        y += x;
    }
    printf("%d %d\n", x, y);
    system("pause");
}
*/

    // d)
    // Output -> _#_#_#_#_#_#_#_#_#_#
/*
void main(){
int i;
    for(i = 0; i < 20; i++){
        if (i%2 == 0) putchar('_');
        else putchar('#');
    }
}
*/

    // e)
    /* Output -> abcdefg
                 bcdefg
                 cdefg
                 defg
                 efg
                 fg
                 g

void main(){
    char i, j;
    for(i = 'a'; i != 'h'; i++){
        for(j = i; j != 'h'; j++) {
            putchar(j); }
            {
        putchar('\n');
        }
    }
}
*/

    //f)
    /* Output -> 1
                 01
                 11
                 001
                 101
                 011
                 111
                 0001
                 1001
                 0101
                 1101
                 0011
                 1011
                 0111
                 1111


void f (int n){
    while (n > 0){
        if(n % 2 == 0) putchar('o');
        else putchar('1');
        n = n/2;
    }
    putchar('\n');

}

int main(){
    int i;
    for ( i = 0; i <16 ; i++){
        f(i);
    }
    return 0;
}
*/

    // 2.

void main(){
    // declarando variáveis
    int i, j, n;

    // pedindo a dimensão do quadrado ao utilizador
    printf("Insira a dimensao do seu quadrado: ");
    scanf("%d", &n); 
/*
    podemos considerar o quadrado como uma matriz n x n
    ou seja usamos 1 for para as linhas e outro for para as
    colunas 
*/
    for(i=0; i < n; i++){
        for(j=0; j < n; j++) {
            putchar('#');
        }
        printf("\n");
    }
    system("pause");
}

    //3

void main(){
    // declarando variáveis
    int i, j, n, quadrados;
    // pedindo a dimensão ao utilizador 
    printf("Insira a dimensao do tabuleiro: ");
    scanf("%d", &n);
    // calcula a quantidade de quadrados para a dimensao dada
    quadrados = n * n;
    i = 0;
    // o i representa o quadrado em que se está e o j a coluna 
    while(i < quadrados) {
        for(j=0; j < n; j++) {
            if (i % 2 == 0) {
                putchar('#');
                i++;
            } else {
                putchar('_');
                i++;
            }
        }
        printf("\n");
    }
    system("pause");
}





















