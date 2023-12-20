#include "sort.h"
/**
 * selection_sort - sorts array using the Selection sort algorithm
 * @array: pointer to an array
 * @size: size of an array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	int temp, min;
	size_t i, j, min_index;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				min_index = j;
			}
		}
		if (min_index != i)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}
