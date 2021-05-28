#ifndef PLANE_DELIVERY_H
#define PLANE_DELIVERY_H

#include "Delivery.h"

struct Plane_Delivery : Delivery
{
  int getPrice(Continents from, Continents to) override;
  QString getFreightMessage() override;
};

#endif  // PLANE_DELIVERY_H
