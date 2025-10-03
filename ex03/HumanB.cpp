// Copyright 2025 Abdelkader Benajiba

#include <iostream>

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : weapon(NULL), name(name) {}

void HumanB::attack(void) {
  if (weapon)
    std::cout << name << " Attack with " << weapon->getType() << std::endl;
  else
    std::cout << "No weapon sets for" << name << std::endl;
}

void HumanB::setWeapon(Weapon& newWeapon) { this->weapon = &newWeapon; }

HumanB::~HumanB() {}
