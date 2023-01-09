CC = gcc
CFLAGS = -Wall

program: program.o sum.o
	$(CC) $(CFLAGS) -o $@ $^

# compile each .c to .o
%.o: %.c sum.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm *.o program
