CC=gcc --std=c99 -g

all: buggy-factorial buggy-list buggy-pointers buggy-sort

buggy-factorial: buggy-factorial.c
	$(CC) buggy-factorial.c -o buggy-factorial

buggy-list: buggy-list.c
	$(CC) buggy-list.c -o buggy-list

buggy-pointers: buggy-pointers.c
	$(CC) buggy-pointers.c -o buggy-pointers

buggy-sort: buggy-sort.c
	$(CC) buggy-sort.c -o buggy-sort

clean:
	rm -f *.o buggy-factorial buggy-list buggy-pointers buggy-sort
