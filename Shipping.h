#pragma once
#include <string>
using std::string;

class Shipping
{

private:
    string address {"default"};
    string city {"default"};
    string state {"default"};
    int zipCode {0};

public:

    // Setters
    void setAddress(string addy);
    void setCity(string theCity);
    void setState(string theState);
    void setZip (int code);
    void setShipping(string addy, string theCity, string theState, int code);

    // Getters
    string getAddy();
    string getCity();
    string getState();
    int getZip();
};

