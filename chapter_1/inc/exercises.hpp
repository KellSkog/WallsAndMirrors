#pragma once

struct Value {
  int dollars;
  int cents;
};
/**
 * The price of an item you want to buy is given in dollars and cents. You pay
 * for it in cash by giving the clerk d dollars and c cents. Write
 * specifications for a function that computes the change, if any, that you
 * should receive. Include a statement of purpose, the preconditions and
 * postconditions, and a description of the arguments.
 *
 * Calculates the change to be returned on a payment made. Change with cents
 * less than a dollar Price, payment and change are in dollars and cents
 * @Input Price, Pay : Value
 * @Return Change : Value
 */
Value execise_1(const Value &price, const Value &pay);

/**
 * A date consists of a month, day, and year. Consider the class Date of such
 * dates. Suppose that Date represents the month, day, and year as integers. For
 * example, July 4, 1776, is month 7, day 4, and year 1776. a. Write
 * specifications for a method within Date that advances any given date by one
 * day. Include a statement of purpose, the preconditions and postconditions, a
 * description of the arguments, and a description of any return value. b. Write
 * a C++ implementation of this method. Design and specify any other method that
 * you need. Include comments that will be helpful to someone who will maintain
 * your implementation in the future.
 *
 * plantuml/dateClass.plantuml
 * Leap years not handled
 */
struct DateView {
  int year;
  int month;
  int day;
};
class Date {
public:
  Date(int year, int month, int day);
  void stepDay();
  DateView getDate();

private:
  // first month has index 1
  static constexpr int days[13] = {0,  31, 28, 31, 30, 31, 30,
                                   31, 31, 30, 31, 30, 31};
  enum Month { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };
  int _year;
  int _month;
  int _day;
};