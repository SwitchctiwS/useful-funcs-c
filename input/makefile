all:
	gcc -c main.c
	cd input; make
	gcc main.o input/input.o -o input.exe

clean:
	rm main.o input.exe
	cd input; make clean
