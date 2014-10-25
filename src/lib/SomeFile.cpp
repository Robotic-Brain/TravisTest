
#include "SomeFile.hpp"
#include "BuildInfo.hpp"

#include <iostream>

void execSomeFile() {
  std::cout << "Included Function!" << std::endl;
  std::cout << "GIT_SHA1: " << GIT_SHA1 << std::endl;
}
