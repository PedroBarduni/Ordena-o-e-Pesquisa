#include<stdio.h>
#include<string.h>
#define QTDE 5

main() {
    char palavra[QTDE][30], aux[30];
    char min;

    for (int i=0; i < QTDE; i++) {
        printf("Type the name %d: ", i+1);
        scanf("%s", &palavra[i]);
    }

    // strcmp("bbb", "bbb") = 0
    // strcmp("bbb", "aaa") = um numero maior que zero
    // strcmp("aaa", "bbb") = um numero menor que zero

    for (int i=0; i < QTDE - 1; i++) {
        min = i;
        for(int j=i+1;j<QTDE;j++) {
            if (strcmp(palavra[j], palavra[min]) < 0) {
                min = j;
            }
        }
        strcpy(aux, palavra[min]);
        strcpy(palavra[min], palavra[i]);
        strcpy(palavra[i], aux);
    }
    for (int i=0; i < QTDE; i++) {
        printf("%s\n", palavra[i]);
    }

}
