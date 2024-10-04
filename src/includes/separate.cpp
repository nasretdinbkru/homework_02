//
// Created by ray on 04.10.2024.
//
#include <iostream>
#include <string>
#include <iomanip>
#include "separate.h"

void inc_func() {
  std::cout.fill('=');
  std::cout << MAGENTA <<  std::setw(19) << "" << std::endl;
  std::cout << "| inc_func called |" << std::endl;
  std::cout << std::setw(19) << "" <<  RESET << std::endl;
}