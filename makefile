SOURCES = main.cpp 

TARGET  = Sudoku.o

CXX      = g++
CXXFLAGS = $(shell pkg-config --cflags --libs gtk+-3.0)

#-------------------------------------------------------------
# Make rules
#

$(TARGET): $(SOURCES)
	$(CXX) $(SOURCES) -o $(TARGET) $(CXXFLAGS)

.PHONY: clean
clean:
	rm -f *.o	
