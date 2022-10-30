# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

sllip: sllip.o
	$(CC) $(CFLAGS) -o sllip sllip.o

sllip.o: sllip.cpp
	$(CC) $(CFLAGS) -c sllip.cpp

clean:
	rm -rf sllip sllip.o
