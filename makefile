CC=gcc
EXT=.exe
CONFIG=$(wildcard config/*.h)
SOURCE=$(wildcard src/*.c)
OUTDIR=$(CONFIG) $(SOURCE)
CFLAGS= -g -std=standard

build: $(CONFIG)
	$(CC) $(CFLAGS) $(SOURCE) -o $(wildcard out/)kane

clean:
	-rm out/*