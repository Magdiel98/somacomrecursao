recursao: build/main.o build/recursao.o
	g++ -Wall -ansi -pedantic -o bin/recursao build/main.o build/recursao.o 

build/main.o: src/main.cpp include/recursao.h
	g++ -c -Wall src/main.cpp -Iinclude -o build/main.o 

build/recursao.o: src/recursao.cpp include/recursao.h
	g++ -c -Wall src/recursao.cpp -Iinclude -o build/recursao.o 
