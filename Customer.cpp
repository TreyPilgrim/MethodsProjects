#include "Customer.h"

#include <utility>

string Customer::getName() const
{
    return this->userName;
}

bool Customer::setCartNum(vector<ShoppingCart> cart)
{
    for (int i{0}; i < cart.size(); i++)
    {
        string tmpUser {cart.at(i).GetUserName()};

        if (tmpUser == this->userName)
        {
            this->cartNum = i;
            return true;
        }
    }

    return false;
}

void Customer::setBasics(std::string userName, std::string password)
{
    this->userName =userName;
    this->password = std::move(password);
}

