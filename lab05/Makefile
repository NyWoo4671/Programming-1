targets = lab5_1.bin lab5_2.bin lab5_3.bin lab5_4.bin lab5_5.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: lab5_1.bin lab5_2.bin lab5_3.bin lab5_4.bin lab5_5.bin
lab5_1.bin: src/lab5_1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab5_2.bin: src/lab5_2.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab5_3.bin: src/lab5_3.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab5_4.bin: src/lab5_4.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab5_5.bin: src/lab5_5.c
	$(CC) $(C_OPTS) $< -o ./dist/$@


run: clean prep compile
	./dist/main.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

