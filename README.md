# CPP-Module-01
This repository contains the exercises for Module 01 of the C++ modules (Version: 10.1).

## Module Guidelines
This module follows the same general rules as the previous ones.

### Naming and Style Conventions
- Class names must be in `UpperCamelCase` format.
- Filenames should match the class name they contain.
- All output must be printed using `std::cout` and end with a newline character.
- While there is no `norminette`, it is highly advisable to follow a consistent style, such as the Google C++ Style Guide, for more readable and maintainable code.

### Class Design
- Design classes in Orthodox Canonical Form (OCF).
- Do not place function implementations in header files.
- Every header file must have include guards.

### Forbidden Practices
- **Keywords**: `using namespace` and `friend` are forbidden.
- **C-style functions**: Do not use `printf`, `alloc`, or `free`.
- **Standard Library**:
  - No C++11 (or newer) features or Boost libraries are allowed.
  - Standard Template Library (STL) containers (e.g., `vector`, `list`, `map`) are not permitted.
  - Standard algorithms are not permitted.
- **Memory Management**: Ensure there are no memory leaks.

### A Final Word of Advice
Learn, learn, and learn. Do not be lazy about searching for in-depth information, watching long videos, or reading documentation. It will be worth it in the end. Trust me!
