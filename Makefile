g = g++
pars = -c -Wall -Werror
file1 = src/chessviz/main.cpp
file2 = src/chessviz/board.cpp
files = $(file1) $(file2)
binary = bin/main
object1 = obj/src/chessviz/main.o
object2 = obj/src/chessviz/board.o
objects = $(object1) $(object2)

all: $(binary) clean

$(object1): $(file1)
	$(g) $(pars) $^ -o $@
 
$(object2): $(file2)
	$(g) $(pars) $^ -o $@

$(binary): $(objects)
	$(g) $^ -o $(binary)

test: all
	./bin/main

no-rm: $(binary)

clean:
	rm obj/src/chessviz/*.o 
