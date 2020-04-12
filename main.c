#include <stdio.h>
#include "string.h"

int main() {

    char *words[] = {"Zero", "One", "Two", "Three"};
    char *str = "Hello";
    char str_2[] = "World";

    print_array_string(words);
    print_string(str);
    print_string(str_2);
    return 0;
}