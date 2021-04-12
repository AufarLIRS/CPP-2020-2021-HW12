#include "cargoisready.h"

void cargoIsReady::setTransport(Transport transport)
{
  transport_ = transport;
}

QString cargoIsReady::cargo()
{
  switch (transport_)
  {
    case Transport::Sea:
      return "Ship is ready";
    case Transport::Air:
      return "Plane is ready";
    case Transport::Ground:
      return "Truck is ready";
  }
}
