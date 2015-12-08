test1 : test1.o
	gcc `pkg-config --cflags gtk+-2.0` test1.o -o test1 `pkg-config --libs gtk+-2.0` -L../lib -lfuncs -I../include 
test1.o : test1.c
	gcc `pkg-config --libs --cflags gtk+-2.0` -g -c test1.c -o test1.o -I../include
clean :
	rm test1.o test1

