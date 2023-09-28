#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of the number.
 *         If the number does not have a natural square root, returns -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
	return (n);

	return (sqrt_helper(n, 1, n));
}

/**
 * sqrt_helper - Recursive helper function to calculate square root.
 * @n: The number to calculate the square root of.
 * @start: The starting point of the search range.
 * @end: The ending point of the search range.
 * Return: The square root of the number.
 * If the number does not have a natural square root, returns -1.
 */
int sqrt_helper(int n, int start, int end)
{
	int mid;
	int result = 0;

	if (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == n)
			return (mid);
		if (mid * mid < n)
		{
			start = mid + 1;
			result = mid;
		}
		else
		{
			end = mid - 1;
		}
		return (sqrt_helper(n, start, end));
	}
	return (result);
}

