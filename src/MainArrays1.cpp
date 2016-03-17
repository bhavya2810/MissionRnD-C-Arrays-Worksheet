#include "FunctionHeadersArrays1.h"
#include <stdio.h>
struct student
{
	char name[10];
	int score;
};

int main(){

	//Test RemoveArraysDuplicates
	/*
	int arr[3] = { 1, 2, 7 };
	int len = removeArrayDuplicates(arr, 3);
	printf("%d", len);
	*/

	//Test Students Count
	/*
	int arr2[3]={1,4,10};
	int *newarray=sortedArrayInsertNumber(arr, 3, 3);
	printf("%d %d %d %d", newarray[0], newarray[1], newarray[2],newarray[3]);
	*/
	int i;
	struct student students[3] = { { "stdu1", 20}, { "stdu2", 30}, { "stdu3", 40} };
	scoresDescendingSort(students, 3);
	for (i = 0; i < 3; i++)
	{
		printf("name[%d]=%s\n", i, students[i].name);
		printf("score[%d]=%d\n", i, students[i].score);

	}



	return 0;
}