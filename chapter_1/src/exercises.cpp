#include "exercises.hpp"

Value execise_1(const Value &price, const Value &pay) {
  int change =
      (100 * pay.dollars + pay.cents) - (100 * price.dollars + price.cents);

  return Value{change / 100, change % 100};
}

Date::Date(int year, int month, int day)
    : _year{year}, _month{month}, _day{day} {}
void Date::stepDay() {
  if (_day == days[_month]) {
    if (_month == Date::Dec) {
      _year++;
      _month = 0;
    }
    _month++;
    _day = 0;
  }
  _day++;
}
DateView Date::getDate() { return {_year, _month, _day}; }