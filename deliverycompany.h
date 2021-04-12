#ifndef DELIVERYCOMPANY_H
#define DELIVERYCOMPANY_H

#include <string>
#include <QString>
enum class Continent
{
  Eurasia = 0,
  Africa = 1,
  North_America = 2,
  South_America = 3,
  Australia = 4,
  Antarctica = 5

};
enum class Transport
{
  Water = 0,
  Ground = 1,
  Air = 2

};
class DeliveryCompany
{
  Continent from;
  Continent to;
  int price;

protected:
  Transport transport;

public:
  QString cargo();

  void setFrom(Continent from);
  void setTransport(Transport transport);
  void setTo(Continent to);
  int getPrice();
  DeliveryCompany();
};

#endif  // DELIVERYCOMPANY_H
