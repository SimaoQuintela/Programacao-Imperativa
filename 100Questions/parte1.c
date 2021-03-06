#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

//1     Returns the biggest element of the sequence
int one(){
    // declarando variáveis
    int maior = 0;
    int n;
    
    printf("Insira os numeros que desejar\n");
    while(n > 0){
        assert(scanf("%d", &n)==1);
        if (n >= maior)
            maior = n;
    }
    return maior;
}

//2  Returns the average of the sequence

void two(){
    int i = 0;
    float soma = 0;
    int numero;
    float media;

    while(numero != 0){
        printf("Insira um numero: ");
        scanf("%d", &numero);
        
        if (numero == 0)
            break;

        soma += numero;
        i++;
    }

    media = soma / i;

    printf("Media: %.2f", media);
}

//3  Return the second biggest of the sequence 
void three(){
    int first = 0,
        second = 0,
        number;

    while(number!= 0){
        printf("Insira um numero: ");
        scanf("%d", &number);

        if(number > first){
            second = first;
            first = number;
        } else if (number > second)
            second = number;

    }

    printf("Second: %d", second);
}

//4  Returns the number of 1's of a binary number represented in decimal by 'n'
void bitsUm(unsigned int n){
    int one = 0;

    while(n!=0){
        if (n%2 == 1)
            one++;
        n = n / 2;
    }

    printf("Number of 1's: %d", one);
}

//5 The opposite of the previous function
int trailingZ(unsigned int n){
    int zero = 0;

    while(n!=0){
        if(n%2==0)
            zero++;
        n /= 2;
    }
    return zero;
}

//6 counts how many digits you need to write the number

int qDig(unsigned int n){
    int i = 0;

    while(n!= 0){
        i++;
        n /= 10;
    }
    return i;
}

//7 concatenate 2 strings 

char *mystrcat (char s1[], char s2[]){
    char newstr[strlen(s1) + strlen(s2)];
    int i, j;

    for (i = 0; i < strlen(s1); i++){
        newstr[i] = s1[i];
    }

    for (j = 0; j < strlen(s2); j++){
        newstr[i + j] = s2[j];
    }

    newstr[strlen(s1) + strlen(s2)] = '\0';

    printf("%s\n", newstr);

    return newstr;
}

//8 

char *mystrcpy(char *dest, char s2[]){
    int i;

    for(i=0; s2[i]!='\0'; i++){
        dest[i] = s2[i];
    }
    dest[i]= '\0';

    return dest;
}

//9 A function that compares 2 strings

int mystrcmp(char s1[], char s2[]) {
    int i = 0, 
        p,
        q;
        
    while(s1[i] == s2[i] && s1[i])
        i++;
        
    p = s1[i];
    q = s2[i];
    return p - q;
}

//10 a function that returns the position where a string occures in other string 
    // problems with the type of the return

char* mystrstr(char s1[], char s2[]){
    size_t i = 0, j = 0;    // I used this type because I need to compare i and j with a strlen function which type is size_t, so I used it on i and j to match the types. In this case
    int position;           // there is no problem to use it because i and j are always >= 0 


    while(i<strlen(s2)){
        while(j<strlen(s1)){
            if(s1[j] != s2[i]){
                i=0;
                j++;
            } else {
                if(s2[strlen(s2)-1] == s1[j]){
                    position = j - strlen(s2) + 1;
                    i++;
                    j++;
                } else {
                    i++;
                    j++;
                }
            }            
        }
        i++;
    }

    char newresult = *(char *)&position;        
    if(i==strlen(s2) && j== strlen(s1)){
        return NULL;
    }
    else 
        return newresult;
}

//11 reverse a string

void mystrrev(char s[]){
    int i = strlen(s) - 1, j;
    char s2[strlen(s)];

    for(j=0; j<strlen(s); j++){
        s2[j] = s[i];
        i--;
    }
    s2[j] = '\0';
    printf("%s\n", s2);
}

//12   delete all of the vogals of a string

int contaVogais(char s[]){
    int vogais = 0, i = 0;
    while(s[i]){
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U'){
            vogais++;
            i++;
        } else {
            i++;
        }
    }
    return vogais;
}

void strnoV(char s[]){
    int i = 0, j = 0;
    char s2[strlen(s) - contaVogais(s)];

    while(s[i]){
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U'){
            i++;
        } else {
            s2[j] = s[i];
            j++;
            i++;
        }
    }
    s2[j] = '\0';

}
// 13



int main(){
    int n;

    printf("Insira o numero da pergunta: ");
    scanf("%d", &n);

    switch (n) {
        case 1 : printf("O maior numero e': %d", one());
            break;
        case 2 : two();
            break;
        case 3 : three();
            break;
        case 4 : bitsUm(27);
            break;
        case 5 : printf("Zeros: %d", trailingZ(27));
            break;
        case 6 : printf("Digitos: %d",qDig(456));
            break;
        case 7 : mystrcat("Hello", "World");
            break;
        case 9 : printf("Resultado: %d", strcmp("Hello", "Helloo"));
            break;
        case 10 : mystrstr("anagrama","ama");
            break;
        case 11 : mystrrev("ana");  // badum ts
            break;
        case 12 : strnoV("jota be be");
            break;
    }   

    return 0;
}
