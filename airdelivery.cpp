#include "airdelivery.h"

std::string AirDelivery::transport = "Plane";
AirDelivery::AirDelivery(Continent from, Continent to)
{
    this->From = from;
    this->To = to;
};

double AirDelivery::getPrice()
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
