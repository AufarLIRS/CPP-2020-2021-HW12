#ifndef COUNTRY_H
#define COUNTRY_H

class Country
{
public:
  Country(int latitude, int longitude);

protected:
  Country();
  int Latitude = 0;   // широта
  int Longitude = 0;  //долгота
  friend class Delivery;
};
class Asia : public Country
{
public:
  Asia();
};
class Europe : public Country
{
public:
  Europe();
};
class NorthAmerica : public Country
{
public:
  NorthAmerica();
};
class SouthAmerica : public Country
{
public:
  SouthAmerica();
};
class Africa : public Country
{
public:
  Africa();
};
class Australia : public Country
{
public:
  Australia();
};
#endif  // COUNTRY_H
