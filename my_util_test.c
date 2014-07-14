#include<stdio.h>
#include "my_util.h"

#define MAX 10

int a[MAX];

int main()
{
	int i, t, x, y;
	for(i=0; i<MAX; i++)
	{
		a[i] = rand();
		printf("%d\n", a[i]);
	}

	bubble_sort(MAX, a);

	printf("---------------\n\n---------");

	for(i=0;i<MAX;i++)
		printf("%d\n", a[i]);

	return 0;
}
