%.o:%.cpp
	g++ -c $< -o $@

all:
	g++ main.cpp Player.cpp npc.cpp random.c -o rpg

$(PROGRAM):$(OBJS)
