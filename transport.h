#ifndef TRANSPORT_H
#define TRANSPORT_H

enum class Transport
{
  Plane,
  Truck,
  Ship
};

inline const char* ToString(Transport v)
{
  switch (v)
  {
    case Transport::Plane:
      return "Plane";
    case Transport::Truck:
      return "Truck";
    case Transport::Ship:
      return "Ship";
    default:
      return "[Unknown]";
  }
}
#endif  // TRANSPORT_H
