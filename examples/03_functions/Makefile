main:main.c add.o sub.o mul.o div.o myArith.h
	gcc main.c -o main libmyArith.a
add.o:add.c
	gcc -c add.c
sub.o:sub.c
	gcc -c sub.c
mul.o:mul.c
	gcc -c mul.c
div.o:div.c
	gcc -c div.c
clean:
	rm *.o main