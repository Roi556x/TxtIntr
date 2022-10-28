# Простой make-file без переменных, для релиза и дебага

.PHONY: all debug release clean

all: debug release

debug: main-dbg

hello-dbg: hello.cpp
	g++ -g -O0 main.cpp -o main-dbg -Wall

release: main

hello: main.cpp
	g++ -O2 main.cpp -o main -DNDEBUG -Wall

clean:
	rm -f main 

