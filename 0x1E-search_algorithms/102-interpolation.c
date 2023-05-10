#include <stdlib.h>

/**
 * interpolation_search - searches for a value in an array
 * of integers using the interpolation search algorithm
 * @array: a pointer to the first element of the array to search
 * @size: number of elements in @array
 * @value: the value to search for
 * 
 * Return: the first index where @value is found or
 * -1 if @array is NULL or value is not present
 */

int interpolation_search(int *array, size_t size, int value)
    {
        int low;
        int high;
        size_t pos;

        low = 0;
        high = size - 1;

        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
        while (pos >= 0 && pos < size)
        {
            printf("value checked array[%d] = [%d]\n", pos, array[pos]);
            if (array[pos] == value)
                return pos;
            else if (array[pos] > value)
                high = pos - 1;
            else
                low = pos + 1;

            pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
        }

        printf("Value checked array[%d] is out of range\n", pos);
        return -1;
    }