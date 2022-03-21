#include<stdio.h>
#define QTDE 7

main() {
    char name[QTDE] = "GABRIEL", temp;

    for (int i = 0; i < QTDE; i++) {
        for(int j = 0; j < QTDE-1; j++) {
            if (name[j] > name[j + 1]) {
                temp = name[j];
                name[j] = name[j + 1];
                name[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < QTDE; i++) {
        printf("%c ", name[i]);
    }
    printf("\n");

    /*pra efeito de estudo, para voces verem qual o numero a letra representa na
    tabela ASCII*/
    for (int i = 0; i < QTDE; i++) {
        printf("%d ", name[i]);
    }
    printf("\n");
}



/* CARATERISTICAS

- Um dos mais simples que existe
- a ideia é flutuar o maior elemento da sequencia para o final
- o método é estável
- Complexidade: O(n²)

*/
