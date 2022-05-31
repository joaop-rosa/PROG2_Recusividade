#include <stdio.h>
#include <stdbool.h>


int chamadasRecursivas = 0;

bool buscaBinaria (int valorBuscado, int menorValor, int maiorValor, int vetor[]) {
    if (menorValor == maiorValor-1){
        if(maiorValor == valorBuscado){
            return true;
        }else{
            return false;
        }
    }
    else {
        int media = (menorValor + maiorValor)/2;
        if (vetor[media] < valorBuscado) {
            chamadasRecursivas++;
            return buscaBinaria(valorBuscado, media, maiorValor, vetor);
        }
        else{
            chamadasRecursivas++;
            return buscaBinaria(valorBuscado, menorValor, media, vetor);
        }

    }
}

int main() {
    int valorBuscado;
    int array[21] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    printf("Array: | ");
    for (int i = 0; i <= 20; ++i) {
        printf("%d | ",array[i]);
    }
    printf("\n");
    printf("Informe o numero a ser buscado no array: ");
    scanf("%d",&valorBuscado);
    bool resultado = buscaBinaria(valorBuscado,array[0],array[20],array);
    if(resultado){
        printf("Numero encontrado\n");
    }else{
        printf("Numero nao encontrado\n");
    }
    printf("Numero de chamadas: %d",chamadasRecursivas);
    return 0;
}
