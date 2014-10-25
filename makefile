TravisTest: src/main.cpp
	$(CXX) src/main.cpp -o "TravisTest"

test: TravisTest
	./TravisTest
