#include "Air_Delivery.h"

int Air_Delivery::getPrice(ToAndFromContinents from, ToAndFromContinents to)
{
  int coefficient = 3;

  if (to == from)
  {
    return 0;
  }

  return calculatePrice(to, coefficient);
}

QString Air_Delivery::getFreightMessage()
{
  return "Plane is ready";
}
