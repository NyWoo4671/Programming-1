targets = lab6_1.bin lab6_2.bin lab6_3.bin lab6_4.bin lab6_5.bin lab6_6.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: lab6_1.bin lab6_2.bin lab6_3.bin lab6_4.bin lab6_5.bin lab6_6.bin
lab6_1.bin: src/task1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab6_2.bin: src/task2.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab6_3.bin: src/task3.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab6_4.bin: src/task4.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab6_5.bin: src/task5.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab6_6.bin: src/task6.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

run: clean prep compile
	./dist/main.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

