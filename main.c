#include <stdio.h>
#include "string.h"

char *words[] = {"Zero", "One", "Two", "Three"};
char *str = "Hello";
char str_2[] = "World";


int main() {

    char *pc = NULL;
    char **ppc = NULL;

    ppc = words;

    for (int i = 0; i < sizeof(words) / sizeof(words[0]); i++) {
        ppc = words + i;
        pc = *ppc;
        while (*pc != 0) {
            printf("%c", *pc);
            pc += 1;
        }
        if (i == (sizeof(words) / sizeof(words[0]) - 1)) {
            printf("\n");
        } else {
            printf(", ");
        }

    }

    print_string(str);
    print_string(str_2);
    return 0;
}