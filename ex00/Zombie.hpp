// Copyright 2025 Abdelkader Benajiba

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
 public:
  void announce(void);
  void setName(std::string name);
  ~Zombie();

 private:
  std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif  // ZOMBIE_HPP
