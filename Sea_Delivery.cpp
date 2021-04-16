#include "Sea_Delivery.h"

int Sea_Delivery::getPrice(ToAndFromContinents from, ToAndFromContinents to)
{
  int coefficient = 1;

  if (to == from)
  {
    return 0;
  }

  return calculatePrice(to, coefficient);
}

QString Sea_Delivery::getFreightMessage()
{
  return "Ship is ready";
}
