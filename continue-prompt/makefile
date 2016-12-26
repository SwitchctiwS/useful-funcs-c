all: continue-prompt.exe

continue-prompt.exe: main.o continue-prompt/continue-prompt.o
	gcc main.o continue-prompt/continue-prompt.o -o continue-prompt.exe

main.o:
	gcc main.c -c

continue-prompt/continue-prompt.o:
	cd continue-prompt; make

clean:
	cd continue-prompt; make clean
	rm main.o continue-prompt.exe