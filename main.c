#include <stdio.h>
#include "string.h"

#define LENGTH 4

int main() {

    char *words[] = {"Zero", "One", "Two", "Three"};
    char *str = "Hello";
    char str_2[] = "World";
    int data[] = {1, 2, 3, 4, 5, 6};

    print_array_string(words, (int)LENGTH);
    print_string(str);
    print_string(str_2);
    print_int_array(data, sizeof(data)/sizeof(data[0]));
    return 0;
}