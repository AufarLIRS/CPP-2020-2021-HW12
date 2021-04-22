#ifndef DELIVERY_H
#define DELIVERY_H
#include "Enums.h"
#include <math.h>
#include <string>
class Delivery
{
public:
  Continent From;
  Continent To;
  Delivery(Continent from, Continent to);
  Delivery();
  virtual double getPrice();
  int DefaultPrice = 100;
  std::string transport;
};

#endif  // DELIVERY_H
