
test: test1.c
	gcc test1.c -o test `pkg-config --cflags --libs gtk+-2.0`
	./test
