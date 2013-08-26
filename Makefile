CFLAGS=-Wall -g -std=c99
CC=gcc

all:
	$(CC) $(CFLAGS) main.c signals.c commander.c/src/commander.c dynrange.c unionfind.c -o main

clean:
	rm main
