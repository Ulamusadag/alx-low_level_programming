#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *alloc_grid - gvghv
 *@width: vfcfg
 *@height: hjgh
 *Return: jkhjk
*/

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j < i; j++)
				free(arr[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
