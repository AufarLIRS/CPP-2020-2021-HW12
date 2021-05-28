#include "Boat_Delivery.h"

int Boat_Delivery::getPrice(Continents from, Continents to)
{
  int coefficient = 1;

  if (to == from)
  {
    return 0;
  }

  return calculatePrice(to, coefficient);
}

QString Boat_Delivery::getFreightMessage()
{
  return "Ship is ready";
}
