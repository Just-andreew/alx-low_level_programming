#include "search_algos.h"
/**
 * interpolation_search - perform interpolation search algorithm
 * @array: sorted array in ascending order
 * @size: size of the array
 * @value: value to search
 * Return: index where value is if it exists inside array otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = low + (((double)(high - low) / (array[high] - array[low])) *
		 (value - array[low]));
		if (mid < low || mid > high)
		{
			printf("Value checked array[%d] is out of range\n", mid);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
