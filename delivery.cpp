#include "delivery.h"
#include "cargoisready.h"

int Price::getPrice()
{
  return price_;
}

void Delivery::setFrom(Continent from)
{
  from_ = from;
}

void Delivery::setTo(Continent to)
{
  to_ = to;
}

int Delivery::getPrice()
{
  if (from_ == to_)
    price_ = 0;
  else
    price_ = (((int)from_ + 1) * 5 + ((int)to_ + 1) * 2) * ((int)cargoIsReady::transport_ + 1);
  return price_;
}
