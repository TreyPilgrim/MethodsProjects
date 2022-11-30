#pragma once
#include <memory>
#include <string>
#include <vector>
#include "ShoppingCart.h"
#include "Shipping.h"
#include "Payment.h"
class Customer;
using ptr = std::shared_ptr<Customer>;
using namespace std;

class Customer
{
public:
    ptr next;
    ptr prev;

    // Base info
    int cartNum {-1};
    string userName;
    string password;

    // shipping
    Shipping shipment;

    // Payment
    Payment card;

    Customer():
            next {nullptr}, prev {nullptr}, userName{"Default"} {}

    explicit Customer(string &userName):
            next {nullptr}, prev {nullptr}, userName{userName} {}

    string getName() const;

    bool setCartNum (vector<ShoppingCart> cart);



};

