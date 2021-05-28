#ifndef TRUCK_DELIVERY_H
#define TRUCK_DELIVERY_H
#include "Delivery.h"

struct Truck_Delivery : Delivery
{
  int getPrice(Continents from, Continents to) override;
  QString getFreightMessage() override;
};

#endif // TRUCK_DELIVERY_H
