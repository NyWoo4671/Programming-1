targets = task3.bin task2.bin task4.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src 
all: clean prep compile

clean:
	rm -rf dist
prep:
	mkdir dist
compile: task3.bin task2.bin task4.bin

task3.bin: src/task3.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task2.bin: src/task2.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task4.bin: src/task4.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

