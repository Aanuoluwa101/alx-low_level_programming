#include <stdlib.h>
#include <math.h>

/**
 * jump_search - searches for a value in an array
 * of integers using the jump search algorithm
 * @array: a pointer to the first element of the array to search
 * @size: number of elements in @array
 * @value: the value to search for
 * 
 * Return: the first index where @value is found or
 * -1 if @array is NULL or value is not present
 */

int jump_search(int *array, size_t size, int value)
    {
        int lower;
        int upper;
        int jump_size = sqrt(size);
        int i;

        lower = 0;
        upper = 0 + jump_size;
        while (lower < upper)
        {
            printf("Value checked array[%d] = [%d]\n", lower, array[lower]);

            if (array[lower] <= value && array[upper] >= value)
            {
                printf("Value found between indexes [%d] and [%d]\n", lower, upper);
                break;
            }
            else if (array[upper] < value)
            {
                lower = upper;
                upper = lower + jump_size;
            }
            else
                return -1;
        }

        for (i = lower; i <= upper && i < size; i++)
        {
            printf("Value checked array[%d] = [%d]\n", i, array[i]);
            if (array[i] == value)
                return i;
        }
        return -1;
    }