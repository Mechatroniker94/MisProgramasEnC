#include <stdio.h>

int main(void) {

    int i;

    printf("+");
    
    for (i = 0; i < 23; i++)
        printf("-");            //Fin del primer for
    printf("+\n");

    for (i = 0; i < 3; i++){
        printf("| o | X | o | X | o | X |");
        printf("\n");
        printf("| X | o | X | o | X | o |");
        printf("\n");
    }//Fin del 2do for
    printf("+");
    for (i = 0; i < 23; i++)
        printf("-");
    printf("+");

    return 0;
}//Fin del main
