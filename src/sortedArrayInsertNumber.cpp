/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	int i = len - 1;
	if (len>0)
	{
		if (Arr != NULL)
		{
			realloc(Arr, (len + 1)*sizeof(int));
			while (Arr[i] >= num&&i >= 0)
			{
				Arr[i + 1] = Arr[i];
				i--;
			}
			Arr[i + 1] = num;
			return Arr;
		}
		else{ return NULL; }
	}
	else{
		return NULL;
	}
}