/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that sorts these scores in descending order.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40).
Output for this will be [ { "stud3", 40 }, { "stud2", 30 }, { "stud1", 20 } ]

INPUTS: Array of structures of type student, length of array.
                 
OUTPUT: Sort the array in descending order of scores.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

struct student {
	char name[10];
	int score;
};

void * scoresDescendingSort(struct student *students, int len) {
	int i = 0,j;
	struct student temp;
	if (len > 0)
	{
		if (students != NULL)
		{
			while (i < len)
			{
				j = i + 1;
				while (j <len)
				{
					if (students[i].score < students[j].score)
					{
						temp = students[i];
						students[i] = students[j];
						students[j] = temp;
					}
					j++;
				}
				i++;
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