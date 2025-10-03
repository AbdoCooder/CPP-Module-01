// Copyright 2025 Abdelkader Benajiba

#include <iostream>

#include "Harl.hpp"

int main(int ac, char *av[]) {
  if (ac != 2)
    return (std::cout << "The program takes one parameter" << std::endl, 1);

  Harl obj;
  std::string levels[NUM_LEVELS] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  size_t i;
  for (i = 0; i < NUM_LEVELS; i++) {
    if (std::string(av[1]) == levels[i]) {
      break;
    }
  }
  switch (i) {
    case 0:
      std::cout << "[ DEBUG ]" << std::endl;
      obj.complain("DEBUG");
      /* fallthrough */
    case 1:
      std::cout << "[ INFO ]" << std::endl;
      obj.complain("INFO");
      /* fallthrough */
    case 2:
      std::cout << "[ WARNING ]" << std::endl;
      obj.complain("WARNING");
      /* fallthrough */
    case 3:
      std::cout << "[ ERROR ]" << std::endl;
      obj.complain("ERROR");
      break;
    default:
      std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
      break;
  }
  return 0;
}
