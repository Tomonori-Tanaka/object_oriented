gcc_options = -std=c++17 -Wall --pedantic-errors
GCC = /opt/homebrew/bin/g++-12

program : main.o
		$(GCC) $(gcc_options) -include ../all.h -o $@ $^

run : program
		./program

clean :
		rm -f ./program
#       rm -f ./all.h.gch

main.o : main.cpp
		$(GCC) $(gcc_options) -c main.cpp
#Date.o : Date.cpp
#		$(GCC) $(gcc_options) -c Date.cpp

.PHONY : rn clean
