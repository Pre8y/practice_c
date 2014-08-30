#include "stack_array.h"
#include<stdlib.h>
#define MAX 100

struct STACK {
	int tos;
	stack_data item[MAX];
};

struct STACK *stack;

void stack_init()
{
	stack = (struct STACK*)malloc (sizeof(stack_data)*MAX);
	stack->tos=-1;	
}

int is_stack_empty()
{
	if(stack->tos==-1)
		return 1;
	else return 0;
}

void stack_push(stack_data x)
{
	if(stack->tos==MAX)
		exit(1);
	else stack->item[++stack->tos]=x;

}

stack_data stack_pop()
{
	if(is_stack_empty())
		exit(1);
	else return stack->item[stack->tos--];
}

void stack_clear()
{
	stack_init();
}
