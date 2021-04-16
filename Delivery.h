#ifndef DELIVERY_H
#define DELIVERY_H

#include <string>
#include "enums.h"
#include <QString>

struct Delivery
{
  virtual QString getFreightMessage() = 0;
  virtual int getPrice(ToAndFromContinents from, ToAndFromContinents to) = 0;
  virtual ~Delivery()
  {
  }
  int calculatePrice(ToAndFromContinents to, int coefficient)
  {
    switch (to)
    {
      case Asia: {
        return coefficient * 1;
      }
      case Europe: {
        return coefficient * 2;
      }
      case NorthAmerica: {
        return coefficient * 3;
      }
      case SouthAmerica: {
        return coefficient * 4;
      }
      case Africa: {
        return coefficient * 5;
      }
      case Australia: {
        return coefficient * 6;
      }
    }
  }
};

#endif  // DELIVERY_H
