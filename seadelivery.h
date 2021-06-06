#ifndef SEADELIVERY_H
#define SEADELIVERY_H
#include "delivery.h"

class SeaDelivery : public Delivery
{
public:
    SeaDelivery(Continent from, Continent to);
    double coef = 0.5;
    double getPrice() override;
    static std::string transport;
};

#endif  // SEADELIVERY_H
