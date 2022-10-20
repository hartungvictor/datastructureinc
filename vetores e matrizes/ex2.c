#include <stdio.h>
#include <stdlib.h>

int main () {
    
    //Trocar a ordem dos elementos de um vetor


    int i, vet[10], vet2[10];

    for(i=0;i<10;i++) {
        printf("Digite o valor da posição: ");
        scanf("%d", &vet[i]);
    }


    for(i=0;i<10;i++) {
        vet2[i] = vet[i] * vet[i];
    }


    for(i=0;i<10;i++) {
        printf("%d ", vet[i]);
    }

    for(i=0;i<10;i++) {
        printf("%d ", vet2[i]);
    }


}