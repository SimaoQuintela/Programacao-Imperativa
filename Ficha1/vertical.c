#include <stdio.h>
#include <stdlib.h>

void vertical(int n){
    // declarando variáveis
    int i, j;
    // metade do triângulo cujo numero de # vai aumentando 
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++){
            if (j <= i) {
                putchar('#');
            }
        } 
        printf("\n");
    }
    // outra metade do triângulo cujo numero de # vai diminuindo
    for(i = 2*n; i > n; i--){
        for(j = 2*n; j > n + 1; j--) {
            if(j <= i) { 
                putchar('#');
            }
        }
    printf("\n");
    }
    system("pause");
}

