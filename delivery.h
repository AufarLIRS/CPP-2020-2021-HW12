#ifndef DELIVERY_H
#define DELIVERY_H

#include "transport.h"
#include "country.h"
#include "paymentapi.h"
class Delivery : PaymentAPI
{
public:
  Delivery(int transportPrice, int countryPrice);
  Delivery();
  int GetSum();
  Country ToCountry;
  Country FromCountry;
  Transport Transport;
};

#endif  // DELIVERY_H
