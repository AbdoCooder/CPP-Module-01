// Copyright 2025 Abdelkader Benajiba

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>

#include "Weapon.hpp"

class HumanB {
 public:
  HumanB(const std::string& name);
  void attack(void);
  void setWeapon(Weapon& newWeapon);
  ~HumanB();

 private:
  Weapon* weapon;
  std::string name;
};

#endif  // HUMANB_HPP
