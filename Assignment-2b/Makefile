all: RPN

RPN: main.o calculateRPN.o fromStack.o toStack.o
		g++ main.o toStack.o fromStack.o calculateRPN.o -o RPN

main.o: main.cpp
		g++ -c main.cpp

calculateRPN.o: calculateRPN.cpp
		g++ -c calculateRPN.cpp

calculateRPN.o: calculateRPN.cpp
		g++ -c calculateRPN.cpp

toStack.o: toStack.cpp
		g++ -c toStack.cpp

fromStack.o: fromStack.cpp
		g++ -c fromStack.cpp

clean:
		rm -rf *.o RPN