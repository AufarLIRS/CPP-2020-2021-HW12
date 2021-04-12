#include "delivery.h"
#include <math.h>
Delivery::Delivery(int transport, int country)  //: ToCountry(0, 0), FromCountry(0, 0), Transport()
{
  this->TransportPrice = transport;
  this->CountryPrice = country;
}
Delivery::Delivery()
{
}

int Delivery::GetSumOfDelivery()
{
  if (FromCountry.Latitude == ToCountry.Latitude && FromCountry.Longitude == ToCountry.Longitude)
    return 0;
  return std::abs((FromCountry.Latitude + ToCountry.Latitude + FromCountry.Longitude + ToCountry.Longitude) *
                      CountryPrice +
                  Transport.power * TransportPrice);
}
