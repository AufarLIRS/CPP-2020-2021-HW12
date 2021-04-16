#include "Ground_Delivery.h"

int Ground_Delivery::getPrice(ToAndFromContinents from, ToAndFromContinents to)
{
  int coefficient = 2;

  if (to == from)
  {
    return 0;
  }

  return calculatePrice(to, coefficient);
}

QString Ground_Delivery::getFreightMessage()
{
  return "Truck is ready";
}
