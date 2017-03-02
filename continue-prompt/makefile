all:
	gcc -c main.c
	cd continue-prompt; make
	gcc main.o continue-prompt/continue-prompt.o -o continue-prompt.exe

clean:
	cd continue-prompt; make clean
	rm main.o continue-prompt.exe
