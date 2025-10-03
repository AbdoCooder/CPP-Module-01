// Copyright 2025 Abdelkader Benajiba

#include <iostream>

#include "Zombie.hpp"

int main() {
  int N = 10;
  Zombie* zombiehord = zombieHorde(N, "Znames");
  for (int i = 0; i < N; i++) {
    zombiehord[i].announce();
  }
  std::cout << std::endl;
  delete[] zombiehord;
  return 0;
}
