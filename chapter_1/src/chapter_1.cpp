#include "chapter_1.hpp"
#include "exercises.hpp"
#include <iostream>

void exercise_1() {
  Value price{12, 45};
  Value pay{15, 50};
  Value change = execise_1(price, pay);
  std::cout << "Dolars: " << change.dollars << ", cents: " << change.cents
            << "\n";
}

int main(int argc, char **argv) {
  if (argc == 1) {
    std::cout << "Hello!\n";
  } else {
    int func = atoi(argv[1]);
    switch (func) {
    case 1:
      exercise_1();
      break;
    }
  }
}