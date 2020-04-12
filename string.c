//
// Created by Akkash on 4/12/2020.
//

#include <stdio.h>

int print_string(char* string) {
    char *pc = NULL;

    pc = string;

    while (*pc != 0) {
        printf("%c", *pc);
        pc += 1;
    }
    printf("\n");
    return 0;
}

int print_array_string(char** string, int length){
    char *pc = NULL;
    char **ppc = NULL;

    ppc = string;

    for (int i = 0; i < length; i++) {
        ppc = string + i;
        pc = *ppc;
        while (*pc != 0) {
            printf("%c", *pc);
            pc += 1;
        }
        if (i == (length - 1)) {
            printf("\n");
        } else {
            printf(", ");
        }

    }
}