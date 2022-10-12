#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
<<<<<<< HEAD

#include <stddef.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
=======

void print_name(char *name, void (*f)(char *));

#endif

>>>>>>> d883c68c36fd1f721b7432f4e45682556f9b05a7
