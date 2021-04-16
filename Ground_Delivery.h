#ifndef GROUND_DELIVERY_H
#define GROUND_DELIVERY_H

#include "Delivery.h"

struct Ground_Delivery : Delivery
{
  int getPrice(ToAndFromContinents from, ToAndFromContinents to) override;
  QString getFreightMessage() override;
};

#endif  // GROUND_DELIVERY_H
