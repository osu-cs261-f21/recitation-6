CC=gcc --std=c99 -g

all: buggy-factorial

buggy-factorial: buggy-factorial.c
	$(CC) buggy-factorial.c -o buggy-factorial

clean:
	rm -f *.o buggy-factorial
