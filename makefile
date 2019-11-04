CC = gcc
CFLAGS = -Wall -ansi -pedantic

all: main.o binary.o name.o title.o common.o principals.o a3.o 
	$(CC) main.o binary.o name.o title.o common.o principals.o a3.o -o a3
	
main.o: main.c
	$(CC) $(CFLAGS) -c main.c 

binary.o: binary.c common.h
	$(CC) $(CFLAGS) -c binary.c 

name.o: name.c binary.h common.h
	$(CC) $(CFLAGS) -c name.c

title.o: title.c binary.h common.h
	$(CC) $(CFLAGS) -c title.c
	
common.o: common.c
	$(CC) $(CFLAGS) -c common.c

principals.o: principals.c binary.h common.h
	$(CC) $(CFLAGS) -c principals.c

a3.o: binary.h common.h name.h title.h principals.h
	$(CC) $(CFLAGS) -c a3.c

clean: 
	rm a3 a3.o
	
run: 
	./a3
	

