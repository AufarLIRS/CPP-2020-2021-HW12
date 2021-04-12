#ifndef CARGOISREADY_H
#define CARGOISREADY_H

#include "enums.h"
#include "QString"

class cargoIsReady
{
protected:
  Transport transport_;

public:
  QString cargo();
  void setTransport(Transport transport);
};

#endif  // CARGOISREADY_H
