// Copyright 2025 Abdelkader Benajiba

#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& w) : weapon(w), name(name) {}

void HumanA::attack(void) {
  std::cout << name << " Attack with " << weapon.getType() << std::endl;
}

HumanA::~HumanA() {}
