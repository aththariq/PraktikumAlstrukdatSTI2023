#include "duplicate.h"
#include <stdio.h>
Set arrToSet(int *arr, int arrSize)
{
	Set result;
	CreateEmpty(&result);

	int i = 0;
	while (i < arrSize)
	{
		if (!IsMember(result, arr[i]))
		{
			Insert(&result, arr[i]);
		}
		i++;
	}

	return result;
}

void removeDuplicateDesc(int* arr, int arrSize, int* arrRes, int* arrResSize) {
    Set resultSet = arrToSet(arr, arrSize);

    int index = 0;
    for (int i = resultSet.Count - 1; i >= 0; i--) {
        arrRes[index] = resultSet.Elements[i];
        index++;
    }

    *arrResSize = resultSet.Count;
}