#include <stdio.h>
#include <stdlib.h>

int main () {
    
    //Preencher um vetor b com o quadrado de cada elemeneto do vetor A


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