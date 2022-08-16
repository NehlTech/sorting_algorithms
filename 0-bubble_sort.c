/*
 * File: 0-bubble_sort.c
 * Auth: Bright
 */

#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */
// void swap_ints(int *x, int *y)
// {
// 	int tmp;

// 	tmp = *x;
// 	*x = *y;
// 	*y = tmp;
// }

// /**
//  * bubble_sort - Sort an array of integers in ascending order.
//  * @array: An array of integers to sort.
//  * @size: The size of the array.
//  *
//  * Description: Prints the array after each swap.
//  */
// void bubble_sort(int *array, size_t size)
// {
// 	size_t i, len = size;
// 	bool bubbly = false;

// 	if (array == NULL || size < 2)
// 		return;

// 	while (bubbly == false)
// 	{
// 		bubbly = true;
// 		for (i = 0; i < len - 1; i++)
// 		{
// 			if (array[i] > array[i + 1])
// 			{
// 				swap_ints(array + i, array + i + 1);
// 				print_array(array, size);
// 				bubbly = false;
// 			}
// 		}
// 		len--;
// 	}
// }
void bubble_sort(int *array, size_t size)
{
	size_t i, n, new_n;
	int swap;

	if (array == NULL || size < 2)
		return;

	n = size;
	while (n > 0)
	{
		new_n = 0;
		for (i = 0; i < n - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
				new_n = i + 1;
				print_array(array, size);
			}
		}
		n = new_n;
	}
}