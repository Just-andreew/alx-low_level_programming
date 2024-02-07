#include "search_algos.h"
#include <math.h>
/**
 * jump_search - perform jump search algorithm
 * @array: sorted array in ascending order
 * @size: size of the array
 * @value: value to search
 * Return: index where value is if it exists inside array otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	int block_s, begin, begin_lin;

	if (array == NULL)
		return (-1);

	block_s = sqrt((double)size);
	begin = 0;
	while (array[begin] < value)
	{
		printf("Value checked array[%d] = [%d]\n", begin, array[begin]);
		begin = begin + block_s;
		if (begin >= (int)size)
			break;
	}
	begin_lin = begin - block_s;
	printf("Value found between indexes [%d] and [%d]\n", begin_lin, begin);
	while (begin_lin <= begin)
	{
		printf("Value checked array[%d] = [%d]\n", begin_lin, array[begin_lin]);
		if (array[begin_lin] == value)
			return (begin_lin);
		begin_lin = begin_lin + 1;
		if (begin_lin >= (int)size)
			return (-1);
	}
	return (-1);
}
