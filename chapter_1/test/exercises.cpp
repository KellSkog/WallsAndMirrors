#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "exercises.hpp"
#include "doctest.h"

TEST_CASE("testing exercise 1") {
  Value result = execise_1({12, 45}, {15, 50});
  CHECK(result.dollars == 3);
  CHECK(result.cents == 5);
}