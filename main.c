#include <stdio.h>
#include "ed_string.h"

#define LENGTH 4

int main() {

    char *words[] = {"Zero", "One", "Two", "Three"};
    char *str = "Hello";
    char str_2[] = "World";
    int data[] = {1, 2, 3, 4, 5, 6};
    char input_data[128];

    print_array_string(words, (int)LENGTH);
    print_string(str);
    print_string(str_2);
    print_int_array(data, sizeof(data)/sizeof(data[0]));

    printf("What is your name?\n");
    scanf("%80s", input_data);
    printf("%s", str_add_hello(input_data));

    return 0;
}
