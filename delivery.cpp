#include "delivery.h"
#include <math.h>
#include <vector>
Delivery::Delivery(int transport, int country) : Delivery()
{
  koefficients[0] = transport;
  koefficients[1] = country;
}
Delivery::Delivery()
{
  koefficients = std::vector<int>(2, 0);
}

int Delivery::GetSum()
{
  if (FromCountry == ToCountry)
    return 0;
  return std::abs((int)FromCountry - (int)ToCountry) * this->PaymentAPI::koefficients[1] +
         (int)Transport * this->PaymentAPI::koefficients[0];
}
