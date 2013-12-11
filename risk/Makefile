# makefile som kan användas för alla, deklaration i början
CXX=g++
CXXFLAGS=-g -Wall
RM=rm -f
LIBS=
OBJS=territory_test.o Territory.o
TARGET=territory_test


all: $(TARGET)

$(TARGET): $(OBJS) 
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

clean:
	$(RM) $(OBJS) $(TARGET) *~

