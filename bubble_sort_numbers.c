#include<stdio.h>
#define QTDE 8

main() {
    int numbers[QTDE] = {45,23,112,8,7,113,38,15};
    int temp;

    for (int i = 0; i < QTDE; i++) {
        for(int j = 0; j < QTDE-1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < QTDE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}



/* CARATERISTICAS

- Um dos mais simples que existe
- a ideia é flutuar o maior elemento da sequencia para o final
- o método é estável
- Complexidade: O(n²)

*/
