#include "sort.h"
/**
 * swap - swaping values of two array index
 * @val_index1: value of array index to be swapped
 * @val_index2: value of array index to be swapped
 * Return: nothing
 */
void swap(int *val_index1, int *val_index2)
{
	int temp;

	temp = *val_index1;
	*val_index1 = *val_index2;
	*val_index2 = temp;
}
/**
 * partition - divide array into two subarray
 * @array: pointer to an array
 * @lower: lower index of partition
 * @higher: higher index of partiton
 * @size: size of array
 * Return: index of correct sort
 */
int partition(int *array, size_t lower, size_t higher, size_t size)
{
	int pivot = array[higher];
	size_t start = lower, end = higher;

	while (start < end)
	{
		while (array[start] <= pivot)
			start++;
		while (array[end] > pivot)
			end--;
		if (start < end)
			swap(&array[start], &array[end]);
	}
	swap(&array[lower], &array[end]);
	print_array(array, size);
	return (end);
}
/**
 * quick_sort - function that sorts an array using the Quick sort algorithm
 * @array: pointer to an array
 * @size: size of an array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	quick_recursion(array, 0, size - 1, size);
}
/**
 * quick_recursion - divided array into subarray and then sort it
 * @array: pointer to an array
 * @lower: lower index in partiton
 * @higher: higher index in partition
 * @size: len of array
 * Return: nothing
 */
void quick_recursion(int *array, size_t lower, size_t higher, size_t size)
{
	size_t index;

	if (lower < higher)
	{
		index = partition(array, lower, higher, size);
		if (index != 0)
			quick_recursion(array, lower, index - 1, size);
		if (index != size - 1)	
			quick_recursion(array, index + 1, higher, size);
	}
}
