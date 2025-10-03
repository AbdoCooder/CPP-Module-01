// Copyright 2025 Abdelkader Benajiba

#include "Zombie.hpp"

void randomChump(std::string name) {
  Zombie random;
  random.setName(name);
  random.announce();
}
