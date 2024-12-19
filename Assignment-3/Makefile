CXX = g++
CXXFLAGS = -std=c++14 -g -Wall -I/usr/include/gtest/include
SOURCES = Transformer.cpp Autobot.cpp Decepticon.cpp Gun.cpp
OBJECTS = $(SOURCES:.cpp=.o)

main: main.o $(OBJECTS)
	$(CXX) -o main main.o $(OBJECTS)

transformer_test: transformer_test.o $(OBJECTS)
	$(CXX) -o transformer_test transformer_test.o $(OBJECTS) -L/usr/include/gtest/lib -lgtest -lpthread

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o main transformer_test
