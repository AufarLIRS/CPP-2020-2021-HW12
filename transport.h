#ifndef TRANSPORT_H
#define TRANSPORT_H
class Transport
{
public:
  Transport(int power);

protected:
  Transport();
  int power = 0;
  friend class Delivery;
};

class Plane : private Transport
{
public:
  Plane();
};
class Truck : private Transport
{
public:
  Truck();
};
class Ship : private Transport
{
public:
  Ship();
};

#endif  // TRANSPORT_H
