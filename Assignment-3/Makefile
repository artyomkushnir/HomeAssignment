CXX = g++
CXXFLAGS = -std=c++11 -g -Wall
TARGET = transformers
SOURCES = main.cpp Transformer.cpp Autobot.cpp Decepticon.cpp Gun.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJECTS) $(TARGET)
