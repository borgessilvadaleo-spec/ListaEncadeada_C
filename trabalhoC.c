#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    struct  No *proximo;
    int tipo;
    void *dados;
   
}No;

int descobrir(char entrada[8]){
    int tipo = 0;

    for (int i = 0;entrada[i] != '\n' && entrada[i] != '\0'; i++){
        if (entrada[i] >= '0' && entrada[i] <= '9'){
        }else if (entrada[i] == '.'){
            tipo ++;
        }else{
            tipo = 2;
        }  
        if(tipo >= 2){
            break;
        }
    }
    return tipo;
}

int main() {
No nos;
char entrada[8];

printf("------------------------------------------");
printf("\n| Digite um NUMERO para entrar pra lista |\n");
printf("------------------------------------------ \n");
 //Buscando o primeiro numero   
fgets(entrada, sizeof(entrada), stdin);
nos.tipo = descobrir(entrada);
printf("Tipo: %d\n", nos.tipo);
}