CC=gcc --std=c99 -g

all: buggy-factorial buggy-pointers buggy-fibonacci

buggy-factorial: buggy-factorial.c
	$(CC) buggy-factorial.c -o buggy-factorial

buggy-pointers: buggy-pointers.c
	$(CC) buggy-pointers.c -o buggy-pointers

buggy-fibonacci: buggy-fibonacci.c
	$(CC) buggy-fibonacci.c -o buggy-fibonacci

clean:
	rm -f *.o buggy-factorial buggy-pointers buggy-fibonacci
