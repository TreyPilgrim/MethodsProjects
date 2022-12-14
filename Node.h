#pragma once
#include <memory>
#include <string>
#include "Shipping.h"
#include "Payment.h"
class Node;
using ptr = std::shared_ptr<Node>;
using namespace std;

class Node
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
    Payment paypal;

    Node():
            next {nullptr}, prev {nullptr}, userName{"Default"} {};

    explicit Node(string &userName):
            next {nullptr}, prev {nullptr}, userName{userName} {};

    string getName() const;


};

