#ifndef BOAT_DELIVERY_H
#define BOAT_DELIVERY_H
#include "Delivery.h"

struct Boat_Delivery : Delivery
{
  int getPrice(Continents from, Continents to) override;
  QString getFreightMessage() override;
};
#endif // BOAT_DELIVERY_H
