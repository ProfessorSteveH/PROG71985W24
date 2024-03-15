CXX = gcc

CXXFLAGS = -Wall -g
LDFLAGS = 

SRCS = $(wildcard *.c)
HDRS = $(wildcard *.h)

all: main

main: $(SRCS) $(HDRS)
	$(CXX) $(CXXFLAGS) -o main $(LDFLAGS) $(SRCS)

clean:
	rm main 

test: main
	./main 

valgrind: main
	valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./main
	
debug: main
	gdb --args ./main 
