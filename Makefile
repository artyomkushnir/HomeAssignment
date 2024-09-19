PROJECT=hello
IDIR=.
CXX=g++
CXXFLAGS=-I$(IDIR)
ODIR=obj
LDIR =../lib
LIBS=-lm
DEPS = hello.h
OBJ = main.o hello.o
.PHONY: default
default: all;
%.o: %.cpp $(DEPS)
$(CXX) -c -o $@ $< $(CXXFLAGS)
$(PROJECT): $(OBJ)
$(CXX) -o $@ $^ $(CXXFLAGS) $(LIBS)
all: $(PROJECT)
.PHONY: clean
clean:
rm -f *.o *~ core $(INCDIR)/*~
cleanall: clean
rm -f $(PROJECT)