CC = g++
CFLAGS = -Wall -Wextra -Werror -pedantic -Weffec++

all: clean hello

hello: hello.cpp
	$(CC) $(CFLAGS) - o hello hello.cpp

clean:
	rm -f *~
	rm -f hello
