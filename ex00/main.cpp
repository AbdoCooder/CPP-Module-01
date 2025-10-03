// Copyright 2025 Abdelkader Benajiba

#include <iostream>

#include "Zombie.hpp"

int main() {
  randomChump("Z0");
  std::cout << std::endl;

  Zombie* zombie = newZombie("Z1");
  zombie->announce();
  delete zombie;
  std::cout << std::endl;

  randomChump("Z2");
  return 0;
}
