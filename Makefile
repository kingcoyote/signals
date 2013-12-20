CFLAGS=-Wall -g -std=c99
CC=gcc
COM=commander.c/src/commander.c

all: collection dsp sort

collection:
	$(CC) $(CFLAGS) $(COM) collectionmain.c collection.c -o collection

dsp:
	$(CC) $(CFLAGS) $(COM) dspmain.c dsp.c -o dsp

sort:
	$(CC) $(CFLAGS) $(COM) sortmain.c sort.c -o sort

clean:
	rm collection
	rm dsp
	rm sort
