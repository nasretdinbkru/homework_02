#include <iostream>
#include <iomanip>
#include "separate.h"

void local_func() {
  std::cout.fill('=');
  std::cout << YELLOW << std::setw(26)<< "" << std::endl;
  std::cout << "| local_func func called |" << std::endl;
  std::cout << std::setw(26)<< "" << RESET << std::endl;
}

int main() {
  std::cout.fill('#');
  std::cout << GREEN << std::setw(26) << "" << std::endl;
  std::cout << "## OTUS C++ base course ##" << std::endl;
  std::cout << "######- Homework #2 -#####" << RESET << std::endl;

  std::cout.fill('=');
  std::cout << BLUE << std::setw(20)<< "" << std::endl;
  std::cout << "| main func called |" << std::endl;
  std::cout << std::setw(20)<< "" << RESET << std::endl;

  local_func();
  inc_func();
  return 0;
}
