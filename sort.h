#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/**
 * enum bool_e - manual definition of booleans, in case C99 stdbool.h not
 * available
 * @false: logical 0
 * @true: logical 1
 */
typedef enum bool_e
{
	false = 0,
	true
} bool;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
listint_t *create_listint(const int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_recursion(int *array, size_t lower, size_t higher, size_t size);
void quick_sort(int *array, size_t size);
int partition(int *array, size_t lower, size_t higher, size_t size);
void swap(int *val_index1, int *val_index2);
void shell_sort(int *array, size_t size);
void dll_adj_swap(listint_t **list, listint_t *left, listint_t *right);
void cocktail_sort_list(listint_t **list);

#endif
