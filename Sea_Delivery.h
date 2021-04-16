#ifndef SEA_DELIVERY_H
#define SEA_DELIVERY_H

#include "Delivery.h"

struct Sea_Delivery : Delivery
{
  int getPrice(ToAndFromContinents from, ToAndFromContinents to) override;
  QString getFreightMessage() override;
};

#endif  // SEA_DELIVERY_H
