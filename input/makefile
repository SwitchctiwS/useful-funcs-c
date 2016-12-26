all: main.o input.o
	gcc main.o input/input.o -o input.exe

main.o:
	gcc main.c -c

input.o:
	cd input; make

clean:
	rm main.o
	cd input; make clean
