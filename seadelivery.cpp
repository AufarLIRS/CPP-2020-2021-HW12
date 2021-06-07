#include "seadelivery.h"
std::string SeaDelivery::transport = "Ship";
SeaDelivery::SeaDelivery(Continent from, Continent to)
{
  this->From = from;
  this->To = to;
};

double SeaDelivery::getPrice()
{
  if (this->From == this->To)
  {
    return 0;
  }
  else
  {
    return this->DefaultPrice * std::abs((int)this->To - (int)this->From) * coef;
  }
};
