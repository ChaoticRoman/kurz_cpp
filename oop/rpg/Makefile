PROGRAM = rpg.out

SOURCES = $(wildcard *.cpp)
OBJS = $(addsuffix .o, $(basename $(SOURCES)))

%.o:%.cpp
	g++ -c $< -o $@

$(PROGRAM):$(OBJS)
	g++ $(OBJS) -o $(PROGRAM)

all: $(PROGRAM)

clean:
	rm -f *.o rpg.out

test:
	echo $(SOURCES)
	echo ${OBJS}
