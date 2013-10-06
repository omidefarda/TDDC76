hello: Hello_world.cc
	g++ Hello_world.cc -o hello

clean:
	@rm -f hello a.out *~
	
monetary_error.o: monetary_error.h monetary.h monetary.cc
	g++ -c monetary_error.cc

monetary.o: monetary.h monetary.cc 
	g++ -c monetary.cc
	
lab2.o: lab2.cc
	g++ -c lab2.cc

main: .o list.o
	g++ -o main lab1-5.o list.o
