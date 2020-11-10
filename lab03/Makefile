targets = lab3.bin lab3_1.bin lab3_2.bin lab3_3.bin lab3_4.bin lab3_5.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: lab3.bin lab3_1.bin lab3_2.bin lab3_3.bin lab3_4.bin lab3_5.bin
lab3.bin: src/lab3.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab3_1.bin: src/lab3_1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab3_2.bin: src/lab3_2.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab3_3.bin: src/lab3_3.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab3_4.bin: src/lab3_4.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab3_5.bin: src/lab3_5.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

run: clean prep compile
	./dist/main.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

