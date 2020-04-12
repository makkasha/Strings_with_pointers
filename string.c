//
// Created by Akkash on 4/12/2020.
//

#include <stdio.h>

void *ptr = NULL;
void **pptr = NULL;

int print_string(char* string) {

    ptr = (void*)string;

    while (*(char*)ptr != 0) {
        printf("%c", *(char*)ptr);
        ptr += 1;
    }
    printf("\n");
    return 0;
}

int print_array_string(char** string, int length){

    pptr = (void**)string;

    for (int i = 0; i < length; i++) {
        pptr = (void**)string + i;
        ptr = *pptr;
        while (*(char*)ptr != 0) {
            printf("%c", *(char*)ptr);
            ptr += 1;
        }
        if (i == (length - 1)) {
            printf("\n");
        } else {
            printf(", ");
        }

    }
}

int print_int_array(int* data, int length){

    for(int i = 0; i < length; i++){
        ptr = data + i;
        printf("%d", *(int*)ptr);
        if(i == length - 1){
            printf("\n");
        }
        else{
            printf(", ");
        }
        ptr += 1;
    }
    return 0;
}