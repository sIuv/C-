CXX=g++
CXXFLAGS=-g -Wall
RM=rm -f

SRCS=main.cpp list.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: list

list: $(OBJS)
	$(CXX) -o list $(OBJS)

main.o: main.cpp

list.o: list.h list.cpp

clean:
	$(RM) $(OBJS)

