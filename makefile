CC=gcc
EXT=.exe
CONFIG=$(wildcard config/*.h)
SOURCE=$(wildcard src/*.c)
OUTDIR=$(CONFIG) $(SOURCE)
CFLAGS= -g $(OUTDIR) -Wall -o $(wildcard out/)

build:
	$(CC) $(CFLAGS)