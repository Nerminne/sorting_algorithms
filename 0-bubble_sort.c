#include "sort.h"
/**
 * bubble_sort - sort array using bubble sort algorithm
 * @array: pointer to an array if integer
 * @size: size of an array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, no_swaping;
	int temp;

	for (j = 0; j < size; j++)
	{
		no_swaping = 1;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
			else
				no_swaping++;

		}
		if (no_swaping == size)
			return;
	}
}
