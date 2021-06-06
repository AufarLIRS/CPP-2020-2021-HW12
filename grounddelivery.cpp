#include "grounddelivery.h"

std::string GroundDelivery::transport = "Truck";
GroundDelivery::GroundDelivery(Continent from, Continent to)
{
    this->From = from;
    this->To = to;
};

double GroundDelivery::getPrice()
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
