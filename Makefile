CXXFLAGS = -g -std=c++11 -Wall -Wfatal-errors

ALL = main

all: $(ALL)

hello: main.cpp Makefile
	$(CXX) $(CXXFLAGS) -o $@ $@.cpp

clean:
	$(RM) $(ALL) *.o

test: all
	bash main
