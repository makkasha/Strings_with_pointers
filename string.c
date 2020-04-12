//
// Created by Akkash on 4/12/2020.
//

#include <stdio.h>

int print_string(char *string) {
    char *pc = NULL;

    pc = string;

    while (*pc != 0) {
        printf("%c", *pc);
        pc += 1;
    }
    printf("\n");
    return 0;
}