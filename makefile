all: task1 task4

task1: task1.c
	gcc -m32 -g task1.c -o task1

task4: task4.c
	gcc -m32 -fno-pie -fno-stack-protector task4.c -o task4

.PHONY: clean

clean:
	rm -f task1 task4