hello: Hello_world.cc
	g++ Hello_world.cc -o hello

clean:
	@rm -f hello a.out *~
	

Monetary.o:  Monetary.cc 
	g++ -c Monetary.cc
	
monetary_error.o: monetary_error.cc
	g++ -c monetary_error.cc
	
lab2.o: lab2.cc
	g++ -c lab2.cc

main: .o list.o
	g++ -o main lab1-5.o list.o
