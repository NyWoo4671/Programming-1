targets = lab6_1.bin lab6_2.bin lab6_3.bin lab6_4.bin lab6_5.bin lab6_6.bin lab5_1.bin lab5_2.bin lab5_3.bin lab5_4.bin lab5_5.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: lab6_1.bin lab6_2.bin lab6_3.bin lab6_4.bin lab6_5.bin lab6_6.bin lab5_1.bin lab5_2.bin lab5_3.bin lab5_4.bin lab5_5.bin
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
lab6_1.bin: src/task6_1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab6_2.bin: src/task6_2.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab6_3.bin: src/task6_3.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab6_4.bin: src/task6_4.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab6_5.bin: src/task6_5.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab6_6.bin: src/task6_6.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

run: clean prep compile
	./dist/main.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

