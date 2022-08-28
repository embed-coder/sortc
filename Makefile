CC=gcc
CFLAGS=-I.

all:
	$(CC) -o sort main.c quicksort.c $(CFLAGS)