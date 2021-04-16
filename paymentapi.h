#ifndef PAYMENTAPI_H
#define PAYMENTAPI_H
#include <vector>

class PaymentAPI
{
public:
  PaymentAPI();
  PaymentAPI(int n);
  std::vector<int> koefficients;
  int GetSum();
};

#endif  // PAYMENTAPI_H
