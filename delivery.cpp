#include "delivery.h"

Delivery::Delivery()
{
  this->From = Continent::Asia;
  this->To = Continent::Asia;
};

Delivery::Delivery(Continent from, Continent to)
{
  From = from;
  To = to;
}
double Delivery::getPrice()
{
  return -1;
}
