CC = gcc
cflags = -Wall -lm -std=c11

SRCS = $(wildcard *.c)

PROGS = $(patsubst %.c,%,$(SRCS))

all: $(PROGS)

%: %.c
	$(CC) $(cflags)  -o ../exe/$@ $<


clean:
	rm ../obj/*.o
