demo: main.o f1.o f2.o
	gcc -o demo main.c 

main.o: main.c f1.h
	gcc -o main.o main.c

f1.o: f1.c f1.h f2.h
	gcc -o f1.o f1.c 

f2.o: f2.c f2.h f1.h
	gcc -o f2.o f2.c 


#make files execute tasks by compiling them.
#here you need to place header files as the prerequisites but not as part of the executable since they are linked together after compilation anyways
#prerequisites link files together, and since they have different files to link to, they need to have different linking prereqs and executables
