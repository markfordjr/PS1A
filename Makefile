CC = g++
CFLAGS = --std=c++20 -Wall -Werror -pedantic -g
LIB = -lboost_unit_test_framework

DEPS = FibLFSR.hpp
OBJECTS = FibLFSR.o
PROGRAM = PhotoMagic
TEST = test

.PHONY: all clean lint PhotoMagic.a

all: $(PROGRAM) $(TEST)

test.o: test.cpp
	$(CC) $(CFLAGS) -o test.o -c test.cpp

FibLFSR.o: FibLFSR.cpp FibLFSR.hpp
	$(CC) $(CFLAGS) -o FibLFSR.o -c FibLFSR.cpp

PhotoMagic.a: $(OBJECTS)
	ar rcs PhotoMagic.a $(OBJECTS)

$(PROGRAM): test.o PhotoMagic.a
	$(CC) $(CFLAGS) -o $(PROGRAM) test.o $(OBJECTS) $(LIB)

$(TEST): test.o PhotoMagic.a
	$(CC) $(CFLAGS) -o $(TEST) test.o $(OBJECTS) $(LIB)

clean:
	rm -f *.o $(PROGRAM) $(TEST) PhotoMagic.a

lint:
	cpplint *.cpp *.hpp

