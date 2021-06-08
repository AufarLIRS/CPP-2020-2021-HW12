#ifndef CARGOISREADY_H
#define CARGOISREADY_H

#include "enums.h"
#include "QString"

class goodsIsReady
{
protected:
  Transport transport_;

public:
  QString goods();
  void setTransport(Transport transport);
};

#endif  // CARGOISREADY_H
