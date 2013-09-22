hello: Hello_world.cc
	g++ Hello_world.cc -o hello

clean:
	@rm -f hello a.out *~
	
	
list.o: list.h list.cc 
	g++ -c list.cc
	
lab1-5.o: lab1-5.cc
	g++ -c lab1-5.cc

main: lab1-5.o list.o
	g++ -o main lab1-5.o list.o
