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