#include<stdio.h>
#include "calc.h"
#include "distance.h"

main() {
    int value;

    printf("Type a number: ");
    scanf("%d", &value);
    printf("Fatorial calc from loop: %d\n\n", fatLoop(value));
    printf("Fatorial calc from recursive: %d\n\n", fatRecursive(value));
    printf("Sum calc: %d\n\n", sum(20, 30));
    printf("Distance: %d\n", calcDistance(80, 150));

    // for (int i=0; i< 10000; i++) {
    //     if (a > b) {
    //         printf("a maior que b")
    //     } else {
    //         if (b > a) {
    //             printf("b maior que a")
    //         } else{
    //             if (asdfa) {

    //             } else{
    //                 if (asd) {

    //                 } else{
                        
    //                 }
    //             }
    //         }
    //     }
    // }
    
}
