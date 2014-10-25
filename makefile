build: main.cpp
	$(CXX) main.cpp

test: build
	./a.out
