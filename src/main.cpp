#include <iostream>
#include "lib/SomeFile.hpp"

int main(int argc, char** argv) {
  std::cout << "Hello Travis!" << std::endl;
  execSomeFile();
  return 0;
}
