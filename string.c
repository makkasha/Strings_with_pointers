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
    void *pc = NULL;
    void **ppc = NULL;

    ppc = (void**)string;

    for (int i = 0; i < length; i++) {
        ppc = (void**)string + i;
        pc = *ppc;
        while (*(char*)pc != 0) {
            printf("%c", *(char*)pc);
            pc += 1;
        }
        if (i == (length - 1)) {
            printf("\n");
        } else {
            printf(", ");
        }

    }
}

int print_int_array(int* data, int length){
    int* pi = NULL;

    for(int i = 0; i < length; i++){
        pi = data + i;
        printf("%d", *pi);
        if(i == length - 1){
            printf("\n");
        }
        else{
            printf(", ");
        }
        pi += 1;
    }
    return 0;
}