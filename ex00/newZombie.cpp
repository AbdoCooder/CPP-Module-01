// Copyright 2025 Abdelkader Benajiba

#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
  Zombie* newZ = new Zombie;
  newZ->setName(name);
  return newZ;
}
