#include<stdio.h>
#define QTDE 12

main() {
    int vector[QTDE] = {32,12,18,40,11,5,3,7,50,80,21,15};
    int min, aux;

    for (int i=0; i < QTDE - 1; i++) {
        min = i;
        for(int j=i+1;j<QTDE;j++) {
            if (vector[j] < vector[min]) {
                min = j;
            }
        }
        aux = vector[min];
        vector[min] = vector[i];
        vector[i] = aux;

        for (int l=0; l < QTDE; l++) {
            printf("%d ", vector[l]);
        }
        printf("\n");
    }
    // for (int i=0; i < QTDE; i++) {
    //     printf("%d ", vector[i]);
    // }

}

/* CARATERISTICAS

- Um dos mais simples que existe
- a ideia é selecionar o menor item do vetor e troca com o que está na primeira posição
- o método é não é estável
- Complexidade: O(n²)
- O fato de já estar previamente ordenado não ajuda em nada, pois o custo 
continua sendo quadrático.

*/
