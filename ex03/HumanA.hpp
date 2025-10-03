// Copyright 2025 Abdelkader Benajiba

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
 public:
  HumanA(const std::string& name, Weapon& w);
  void attack(void);
  ~HumanA();

 private:
  Weapon& weapon;
  std::string name;
};

#endif  // HUMANA_HPP
