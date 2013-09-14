hello: Hello_world.cc
	g++ Hello_world.cc -o hello

clean:
	@rm -f hello a.out *~

