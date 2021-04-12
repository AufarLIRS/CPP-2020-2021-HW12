#include "deliverycompany.h"

DeliveryCompany::DeliveryCompany()
{
}
void DeliveryCompany::setFrom(Continent from_)
{
  from = from_;
}
void DeliveryCompany::setTransport(Transport transport_)
{
  transport = transport_;
}
void DeliveryCompany::setTo(Continent to_)
{
  to = to_;
}
QString DeliveryCompany::cargo()
{
  switch (transport)
  {
    case Transport::Water:
      return "Ship is ready: ";
    case Transport::Air:
      return "Plane is ready: ";
    case Transport::Ground:
      return "Truck is ready: ";
  }
}
int DeliveryCompany::getPrice()
{
  if (from == to)
    price = 0;
  else
    price = (((int)from + 1) * 5 + ((int)to + 1) * 2) * ((int)transport + 1);
  return price;
}
