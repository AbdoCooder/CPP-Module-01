// Copyright 2025 Abdelkader Benajiba

#ifndef HARL_HPP
#define HARL_HPP

#define NUM_LEVELS 4

#include <string>

class Harl {
 public:
  Harl();
  void complain(std::string level);
  ~Harl();

 private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
};

#endif  // HARL_HPP
