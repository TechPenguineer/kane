CC=gcc
EXT=.exe
CONFIG=$(wildcard config/*.h)
SOURCE=$(wildcard src/*.c)
OUTDIR=$(CONFIG) $(SOURCE)
CFLAGS= -g

build: $(CONFIG)
	$(CC) $(CFLAGS) $(SOURCE) -o $(wildcard out/)kane$(EXT)