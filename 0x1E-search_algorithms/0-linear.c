#include "search_algos.h"
/**
 * linear_search - performs linear search over a given array
 * @array: given array
 * @size: array size
 * @value: value to search
 * Return: index of value if it's found otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	int idx, result = -1;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < (int)size; idx++)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			result = idx;
			break;
		}
	}
	return (result);
}
