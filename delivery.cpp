#include "delivery.h"

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
  return FromCountry.Latitude * CountryPrice + ToCountry.Latitude * CountryPrice +
         FromCountry.Longitude * CountryPrice + ToCountry.Longitude * CountryPrice + Transport.power * TransportPrice;
}
