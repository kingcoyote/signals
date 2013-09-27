CFLAGS=-Wall -g -std=c99
CC=gcc
COM=commander.c/src/commander.c

all:
	$(CC) $(CFLAGS) $(COM) noisemain.c signals.c dynrange.c sgfilter.c -o noise
	$(CC) $(CFLAGS) $(COM) unionfindmain.c unionfind.c -o unionfind
	$(CC) $(CFLAGS) $(COM) sortmain.c sort.c -o sort

clean:
	rm noise
	rm unionfind
	rm sort
