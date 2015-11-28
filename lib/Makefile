CC = gcc
CFLAGS = -g -Wall
OUTPUT = libfuncs.a
OBJFILE = func1.o func2.o
.PHONY: clean

$(OUTPUT): $(OBJFILE)
	ar rv $(OUTPUT) $(OBJFILE)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(OBJFILE)
