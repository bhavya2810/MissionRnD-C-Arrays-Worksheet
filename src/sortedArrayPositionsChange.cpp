/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	int i = len - 1, j, temp;
	if (len > 0)
	{
		if (Arr != NULL)
		{
			while (i >= 0)
			{
				if (Arr[i - 1] > Arr[i])
				{
					j = i - 1;
					while (j >= 0 && Arr[j] > Arr[i])
					{
						j--;
					}
					temp = Arr[i];
					Arr[i] = Arr[j + 1];
					Arr[j + 1] = temp;
					break;
				}
				i--;
			}
		}
		else
		{
			return NULL;
		}
	}
	else{
		return NULL;
	}
}