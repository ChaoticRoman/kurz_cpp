PROGRAM = rpg.out

SOURCES = $(wildcard *.cpp)
HEADERS = $(addsuffix .h, $(basename $(SOURCES)))
OBJS = $(addsuffix .o, $(basename $(SOURCES)))

# https://stackoverflow.com/questions/4320416/how-to-use-a-variable-list-as-a-target-in-a-makefile
%.o:%.cpp %.h
	g++ -c $< -o $@

$(PROGRAM):$(OBJS) $(HEADERS)
	g++ $(OBJS) -o $(PROGRAM)

all: $(PROGRAM)

clean:
	rm -f *.o rpg.out
