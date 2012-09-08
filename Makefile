CC = g++
CFLAGS = -Wall -Wextra -Werror -pedantic -Weffc++

all: clean hello

hello: hello.cpp
	$(CC) $(CFLAGS) -o hello hello.cpp

eulerprob1: eulerprob1.cpp
	$(CC) $(CFLAGS) -o eulerprob1 eulerprob1.cpp

eulerprob7: eulerprob7.cpp
	$(CC) $(CFLAGS) -o eulerprob7 eulerprob1.cpp

clean:
	rm -f *~
	rm -f hello
