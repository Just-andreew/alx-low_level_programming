#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @start: The starting index of the subarray to search in
 * @end: The ending index of the subarray to search in
 * @value: The value to search for
 *
 * Return: The index of the value in the array if found, otherwise -1
 */
int binary_search(int *array, int start, int end, int value)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        printf("Searching in array: ");
        for (int i = start; i <= end; i++)
        {
            if (i != start)
                printf(", ");
            printf("%d", array[i]);
        }
        printf("\n");

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located,
 * or -1 if the value is not present in the array or if the array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    int bound = 1;
    while (bound < (int)size && array[bound] < value)
    {
        printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    int start = bound / 2;
    int end = (bound < (int)size) ? bound : size - 1;

    printf("Value found between indexes [%d] and [%d]\n", start, end);

    return binary_search(array, start, end, value);
}

