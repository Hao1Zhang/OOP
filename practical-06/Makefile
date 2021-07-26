MAIN = main
OUTPUT = main
CXXFLAGS=-I. -Wall -Werror
ifndef RELEASE
CXXFLAGS+= -D_WXW_
endif
DEPS = $(MAIN).cpp *.cpp
OBJ = $(OUTPUT).o Library.o Book.o
FUNCS=$(wildcard *.cpp)

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

$(OUTPUT): $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

_compile: $(FUNCS) clean
	$(CXX) -c $^ $(CXXFLAGS)

OBJS=$(FUNCS:.cpp=.o)

c: $(OBJS)

cc: $(OBJS) clean

run: $(OUTPUT)
	"./$(OUTPUT)"

clean:
	@rm -rf *.o
	@find . -perm +100 -type f -delete


define create_function_files
import os
for x in range(1, 5):
	for y in range(1, 2):
		filename = "function-%d-%d.cpp" % ( x, y )
		main_filename = "main-%d-%d.cpp" % ( x, y )
		if not os.path.exists(filename):
			open(filename, "w+").close()
		if not os.path.exists(main_filename):
			with open(main_filename, "w+") as f:
				f.write("""
#include <iostream>
#include <stdlib.h>

int main(int argc,char **argv)
{
	// your code goes here ...
	return 0 ;
}

				""")

		print("%d, %d" % (x, y))
endef

export create_function_files
gen:
	@echo "$$create_function_files" > gen.py
	python gen.py

clear_comment:
	perl -0777 -i -pe 's{/\*.*?\*/}{}gs' function*.cpp
	perl -0777 -i -pe 's{#ifdef _WXW_.*?#endif}{}gs' function*.cpp
