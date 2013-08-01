CFLAGS=-Wall -g
CC=gcc

all:
	$(CC) $(CFLAGS) main.c signals.c -o main

clean:
	rm signals
