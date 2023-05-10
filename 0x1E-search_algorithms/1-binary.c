#include <stdlib.h>

/**
 * print_array - prints an array of integers
 * @arr: pointer to the first element of the array
 * @begin: the start index of the array
 * @end: the end index of the array
 * 
 * Return: nothing
 */

void print_array(int *arr, int begin, int end) {
        printf("Searching in array: ");
        for (int i = begin; i <= end; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    
/**
 * binary_search - searches for a value in an array
 * of integers using the binary search algorithm
 * @array: a pointer to the first element of the array to search
 * @size: number of elements in @array
 * @value: the value to search for
 * 
 * Return: the first index where @value is found or
 * -1 if @array is NULL or value is not present
 */

int binary_search(int *array, size_t size, int value)
    {
        int begin;
        int end;
        int mid;

        if (array == NULL)
            return -1;

        begin = 0;
        end = size - 1;
        while (begin <= end)
        {
            print_array(array, begin, end);
            mid = begin + (end - begin) / 2;
            if (array[mid] == value)
                return mid;
            else if (array[mid] < value)
                begin = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
