#include "Shipping.h"

/*
 * Setters
 */
void Shipping::setAddress(std::string addy)
{
    this->address = addy;
}

void Shipping::setCity(std::string theCity)
{
    this->city = theCity;
}

void Shipping::setState(std::string theState)
{
    this->state = theState;
}

void Shipping::setZip(int code)
{
    this->zipCode = code;
}

void Shipping::setShipping(std::string addy, std::string theCity, std::string theState, int code)
{
    setAddress(std::move(addy));
    setCity(std::move(theCity));
    setState(std::move(theState));
    setZip(code);
}

/*
 * Getters
 */
string Shipping::getAddy()
{
    return this->address;
}

string Shipping::getCity()
{
    return this->city;
}

string Shipping::getState()
{
    return this->state;
}

int Shipping::getZip()
{
    return this->zipCode;
}

