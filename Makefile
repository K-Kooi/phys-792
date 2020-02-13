.PHONY: all clean info install

CXXFLAGS = -Wall -O2
CXXFLAGS+=$(shell root-config --cflags)

LIBS = $(shell root-config --libs)

SRC = $(wildcard *.cc)
EXE = $(SRC:.cc=.exe)

all: $(EXE)

%.exe: %.cc
	@$(CXX) $(CXXFLAGS) $(LIBS) $< -o $@
	@echo "compiled $<"

info:
	@echo $(SRC)
	@echo $(EXE)

clean:
	@$(RM) *.exe
	@echo "removed all .exe files"

install:
	@mv *.exe ~/bin
	@echo "moved all .exe files to ~/bin"
