#include "Truck_Delivery.h"

int Truck_Delivery::getPrice(Continents from, Continents to)
{
  int coefficient = 2;

  if (to == from)
  {
    return 0;
  }

  return calculatePrice(to, coefficient);
}

QString Truck_Delivery::getFreightMessage()
{
  return "Truck is ready";
}
