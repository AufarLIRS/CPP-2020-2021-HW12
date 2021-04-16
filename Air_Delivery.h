#ifndef AIR_DELIVERY_H
#define AIR_DELIVERY_H

#include "Delivery.h"

struct Air_Delivery : Delivery
{
  int getPrice(ToAndFromContinents from, ToAndFromContinents to) override;
  QString getFreightMessage() override;
};

#endif  // AIR_DELIVERY_H
