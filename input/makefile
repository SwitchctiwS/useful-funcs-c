all: main.o input/input.o
	gcc main.o input/input.o -o input.exe

main.o:
	gcc main.c -c

input/input.o:
	cd input; make

clean:
	rm main.o input.exe
	cd input; make clean
