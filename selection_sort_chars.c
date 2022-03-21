#include<stdio.h>
#define QTDE 20

main() {
    char palavra[QTDE] = "SISTEMASINF 2022", aux;
    int min;

    for (int i=0; i < QTDE - 1; i++) {
        min = i;
        for(int j=i+1;j<QTDE;j++) {
            if (palavra[j] < palavra[min]) {
                min = j;
            }
        }
        aux = palavra[min];
        palavra[min] = palavra[i];
        palavra[i] = aux;
    }
    for (int i=0; i < QTDE; i++) {
        printf("%c ", palavra[i]);
    }
    printf("\n");

}
