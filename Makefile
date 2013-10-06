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

lab2: lab2.o monetary.o monetary_error.o
	g++ -o lab2.o monetary.o monetary_error.o
