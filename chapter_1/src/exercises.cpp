#include "exercises.hpp"

Value execise_1(const Value &price, const Value &pay) {
  int change =
      (100 * pay.dollars + pay.cents) - (100 * price.dollars + price.cents);

  return Value{change / 100, change % 100};
}