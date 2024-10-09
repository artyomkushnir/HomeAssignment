all: file

file: main.o reverse_file.o
	g++ main.o reverse_file.o -o file

main.o: main.cpp
	g++ -c main.cpp

.o: reverse_file.cpp
	g++ -c reverse_file.cpp

clean:
	rm -rf *.o hello