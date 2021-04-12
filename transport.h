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

class Plane : public Transport
{
public:
  Plane();
};
class Truck : public Transport
{
public:
  Truck();
};
class Ship : public Transport
{
public:
  Ship();
};

#endif  // TRANSPORT_H
