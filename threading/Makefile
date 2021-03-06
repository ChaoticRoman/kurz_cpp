SRC_FILES := $(wildcard *.cpp)
OUT_FILES := $(patsubst %.cpp,%.out,$(SRC_FILES))

ALL: $(OUT_FILES)

%.out: %.cpp
	g++ -pthread -o $@ $<

clean:
	rm *.out
