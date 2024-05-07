#ifndef _search_algos_
#define _search_algos_

#include <stddef.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search_index(int *array, size_t l, size_t r, int value);
void print_array(int *array, size_t l, size_t r);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int b_search(int *array, size_t low, size_t high, int value);

#endif /* _search_algos_ */
