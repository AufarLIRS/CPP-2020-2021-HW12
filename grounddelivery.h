#ifndef GROUNDDELIVERY_H
#define GROUNDDELIVERY_H
#include "delivery.h"

class GroundDelivery : public Delivery
{
public:
  GroundDelivery(Continent from, Continent to);
  double coef = 1.0;
  double getPrice() override;
  static std::string transport;
};

#endif  // GROUNDDELIVERY_H
