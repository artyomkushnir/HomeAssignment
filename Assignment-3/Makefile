PROJECT = main

LIBPROJECT = $(PROJECT).a

TESTPROJECT = transformer_test

CXX = g++

A = ar

AFLAGS = rsv

CXXFLAGS = -I. -std=c++14 -Wall -g -fPIC -I/usr/include/gtest/include

LDXXFLAGS = $(CXXFLAGS) -L. -l:$(LIBPROJECT)

LDGTESTFLAGS = $(LDXXFLAGS) -L/usr/include/gtest/lib -lgtest -lpthread

DEPS = $(wildcard *.h)

SOURCES = Transformer.cpp Autobot.cpp Decepticon.cpp Gun.cpp

OBJ = $(SOURCES:.cpp=.o)

TEST-OBJ = transformer_test.o

.PHONY: default

default: all;

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

$(LIBPROJECT): $(OBJ)
	$(A) $(AFLAGS) $@ $^

$(PROJECT): main.o $(LIBPROJECT)
	$(CXX) -o $@ main.o $(LDXXFLAGS)

$(TESTPROJECT): $(LIBPROJECT) $(TEST-OBJ)
	$(CXX) -o $@ $(TEST-OBJ) $(LDGTESTFLAGS)

test: $(TESTPROJECT)

all: $(PROJECT)

.PHONY: clean

clean:
	rm -f *.o

cleanall: clean
	rm -f $(PROJECT)
	rm -f $(LIBPROJECT)
	rm -f $(TESTPROJECT)