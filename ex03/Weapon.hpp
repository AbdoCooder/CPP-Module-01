// Copyright 2025 Abdelkader Benajiba

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
 public:
  Weapon(const std::string& Type);
  const std::string& getType(void) const;
  void setType(const std::string& newType);
  ~Weapon();

 private:
  std::string type;
};

#endif  // WEAPON_HPP
