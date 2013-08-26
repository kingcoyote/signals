CFLAGS=-Wall -g -std=c99
CC=gcc
COM=commander.c/src/commander.c

all:
	$(CC) $(CFLAGS) $(COM) noisemain.c signals.c dynrange.c -o noise
	$(CC) $(CFLAGS) $(COM) unionfindmain.c unionfind.c -o unionfind

clean:
	rm noise
	rm unionfind
