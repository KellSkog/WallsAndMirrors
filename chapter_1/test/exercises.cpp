#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "exercises.hpp"
#include "doctest.h"

TEST_CASE("testing exercise 1") {
  Value result = execise_1({12, 45}, {15, 50});
  CHECK(result.dollars == 3);
  CHECK(result.cents == 5);
  result = execise_1({12, 45}, {13, 45});
  CHECK(result.dollars == 1);
  CHECK(result.cents == 0);
  result = execise_1({12, 45}, {12, 46});
  CHECK(result.dollars == 0);
  CHECK(result.cents == 1);
  result = execise_1({12, 45}, {12, 45});
  CHECK(result.dollars == 0);
  CHECK(result.cents == 0);
}
TEST_CASE("testing exercise 2") {
  Date date{2022, 10, 16};
  DateView result = date.getDate();
  CHECK(result.year == 2022);
  CHECK(result.month == 10);
  CHECK(result.day == 16);
  date.stepDay();
  result = date.getDate();
  CHECK(result.year == 2022);
  CHECK(result.month == 10);
  CHECK(result.day == 17);

  Date date2{2022, 12, 31};
  date2.stepDay();
  result = date2.getDate();
  CHECK(result.year == 2023);
  CHECK(result.month == 1);
  CHECK(result.day == 1);

  Date date3{2022, 2, 28};
  date3.stepDay();
  result = date3.getDate();
  CHECK(result.year == 2022);
  CHECK(result.month == 3);
  CHECK(result.day == 1);
}