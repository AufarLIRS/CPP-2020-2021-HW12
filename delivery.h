#ifndef DELIVERY_H
#define DELIVERY_H

#include "transport.h"
#include "country.h"

class Delivery
{
public:
  Delivery(int transport, int country);
  Delivery();
  int TransportPrice;
  int CountryPrice;
  int GetSumOfDelivery();
  Country ToCountry;
  Country FromCountry;
  Transport Transport;
};

#endif  // DELIVERY_H
