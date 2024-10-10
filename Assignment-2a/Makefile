all: reverse_file

reverse_file: main.o reverse_file.o
		g++ main.o reverse_file.o -o reverse_file

main.o: main.cpp
		g++ -c main.cpp

reverse_file.o: reverse_file.cpp
		g++ -c reverse_file.cpp

clean:
		rm -rf *.o reverse_file