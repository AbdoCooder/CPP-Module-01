// Copyright 2025 Abdelkader Benajiba

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
  // if there is no zombies to allocate return NULL
  if (N <= 0) {
    return (NULL);
  }
  // allocate a table of N zombies
  Zombie* newZombieHorde = new Zombie[N];
  for (int i = 0; i < N; i++) {
    newZombieHorde[i].setName(name);
  }
  return (newZombieHorde);
}
