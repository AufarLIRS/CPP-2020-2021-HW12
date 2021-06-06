#ifndef AIRDELIVERY_H
#define AIRDELIVERY_H
#include "delivery.h"

class AirDelivery : public Delivery
{
public:
    AirDelivery(Continent from, Continent to);
    double coef = 1.5;
    double getPrice() override;
    static std::string transport;
};

#endif  // AIRDELIVERY_H
