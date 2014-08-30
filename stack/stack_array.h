typedef int stack_data;
/*
 * initialize the library
 */
extern void stack_init();
/*
 * clear the stack of all the entries
 */
extern void stack_clear();
/*
 * returns 1 if the stack is empty 0 if not
 */
extern int is_stack_empty();
extern void stack_push(stack_data d);
extern stack_data stack_pop();
