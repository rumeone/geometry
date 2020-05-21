
flags = -Wall -Werror

all: bin build bin/prog

bin/prog: build/main.o build/circle.o build/triangle.o 
	gcc build/main.o build/circle.o build/triangle.o -o bin/prog -lm 

build/main.o: src/main.c 
	gcc $(flags) -c src/main.c -o build/main.o

build/circle.o: src/circle.c 
	gcc $(flags) -c src/circle.c -o build/circle.o

build/triangle.o: src/triangle.c 
	gcc $(flags) -c src/triangle.c -o build/triangle.o

bin:
	mkdir -p bin

build:
	mkdir -p build

clean: 
	rm -rf bin/prog build/*.o	

.PHONY: all clean 

