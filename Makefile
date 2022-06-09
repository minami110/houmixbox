PYTHON ?= python3.7
SOURCE := main.cpp pigment-mixing/mixbox.cpp
FLAG   := -O3 -Wall -shared -std=c++14 -fPIC `$(PYTHON) -m pybind11 --includes`
DEST   := ./python3.7libs

mixbox:	
	g++ $(FLAG) $(INCLUDE) -I ./pigment-mixing $(SOURCE) -o $(DEST)/mixbox`$(PYTHON)-config --extension-suffix`