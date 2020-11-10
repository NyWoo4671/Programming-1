targets = lab4_1.bin lab4_2.bin lab4_3.bin lab4_4.bin lab4_5.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: lab4_1.bin lab4_2.bin lab4_3.bin lab4_4.bin lab4_5.bin
lab4_1.bin: src/lab4_1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab4_2.bin: src/lab4_2.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab4_3.bin: src/lab4_3.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab4_4.bin: src/lab4_4.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab4_5.bin: src/lab4_5.c
	$(CC) $(C_OPTS) $< -o ./dist/$@


run: clean prep compile
	./dist/main.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

