my_util_test: my_util_test.o my_util.o
	gcc -o my_util_test my_util_test.o my_util.o
my_util_test.o: my_util_test.c my_util.h
	gcc -c -g my_util_test.c
my_util.o: my_util.c my_util.h
	gcc -c -g my_util.c
