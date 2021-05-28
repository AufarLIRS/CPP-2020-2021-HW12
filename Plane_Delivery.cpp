#include "Plane_Delivery.h"

int Plane_Delivery::getPrice(Continents from, Continents to)
{
  int coefficient = 3;

  if (to == from)
  {
    return 0;
  }

  return calculatePrice(to, coefficient);
}

QString Plane_Delivery::getFreightMessage()
{
  return "Plane is ready";
}
