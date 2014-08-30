#include<stdio.h>
#include "stack_array.h"

int main()
{

 int i ;
 stack_init();
 stack_push(1);
 stack_push(3);
 stack_push(5);

 printf("----------------\n");
for(i=0; i<3; i++)
	printf("%d\n", stack_pop());
}
