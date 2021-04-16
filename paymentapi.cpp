#include "paymentapi.h"

PaymentAPI::PaymentAPI()
{
}

PaymentAPI::PaymentAPI(int numberOfKoefficients)
{
  koefficients = std::vector<int>(numberOfKoefficients, 0);
}
