#include "DoublyList.h"
#include <memory>
#include <iostream>

using namespace std;
/*
 *                  Private Functions
 */
// Peek functionality
bool DoublyList::peek()
{
    if (head.use_count() == 0) // if null, return false
        return false;
    else // otherwise, return true
        return true;
}

// Search Functionality
bool DoublyList::search(ptr &customer, const std::string& userName)
{
    if(customer == nullptr)
        return false;
    else if (customer->getName() == userName)
        return true;
    else
        return search(customer->next, userName);

}

// Remove Functionality
bool DoublyList::remove(ptr &customer, const string& userName)
{
    if(!this->peek()) // if not found, return false
        return false;
    else if (customer->getName() == userName) // if name found, remove & return true
    {
        if (customer == head) // if @ head, update head
            customer->next = head;
        if (customer == tail) // if @ tail, update tail
            customer->prev = tail;

        // remove customer from list then return true
        customer->prev->next = customer->next;
        customer->next->prev = customer->prev;
        customer = nullptr;
        return true;
    }
    else // otherwise, call function at next customer
        return remove(customer->next, userName);
}
bool DoublyList::login(ptr &customer, std::string userName, std::string password)
{
    if (customer->userName == userName)
    {
        if (customer->password == password)
            return true;
        else
        {
            cout << "Incorrect password..." << endl;
            return false;
        }
    }
    else
        return login(customer->next, userName, password);

}

/*
 * String Return Type
 */
string DoublyList::showPassword(ptr &customer, const std::string &userName)
{
    if (customer->userName == userName)
    {
        return customer->password;
    }
    else
        return showPassword(customer->next, userName);
}
/*
 * Void Return Type
 */

// Edit Basic Info
void DoublyList::changeName(ptr &customer, const string& oldName, const std::string &newName)
{
    if (customer->userName == oldName)
    {
        customer->userName = newName;
    }
    else
        changeName(customer->next, oldName, newName);
}

void DoublyList::changePass(ptr &customer, const std::string &userName, const std::string &newPass)
{
    if (customer->userName == userName)
    {
        customer->password = newPass;
    }
    else
        changePass(customer->next, userName, newPass);
}

// Edit Shipment
void DoublyList::changeAddy (ptr & customer, const string &userName, const string &newAddy)
{
    if (customer->userName == userName)
    {
        customer->shipment.setAddress(newAddy);
    }
    else
        changeAddy(customer->next, userName, newAddy);
}

void DoublyList::changeCity(ptr &customer, const std::string &userName, const std::string &newCity)
{
    if (customer->userName == userName)
    {
        customer->shipment.setCity(newCity);
    }
    else
        changeCity(customer->next, userName, newCity);
}

void DoublyList::changeState(ptr &customer, const std::string &userName, const std::string &newState)
{
    if (customer->userName == userName)
    {
        customer->shipment.setState(newState);
    }
    else
        changeState(customer->next, userName, newState);
}

void DoublyList::changeZip(ptr &customer, const std::string &userName, const int newZip)
{
    if (customer->userName == userName)
    {
        customer->shipment.setZip(newZip);
    }
    else
        changeZip(customer->next, userName, newZip);
}

// Edit Payment
void DoublyList::changeCard(ptr &customer, const std::string &userName, int newNum)
{
    if (customer->userName == userName)
    {
        customer->card.setCardNum(newNum);
    }
    else
        changeCard(customer->next, userName, newNum);
}

void DoublyList::changeExpDate(ptr &customer, const std::string &userName, int newExpDate)
{
    if (customer->userName == userName)
    {
        customer->card.setExpDate(newExpDate);
    }
    else
        changeExpDate(customer->next, userName, newExpDate);
}

void DoublyList::changeSecurCode(ptr &customer, const std::string &userName, int code)
{
    if (customer->userName == userName)
    {
        customer->card.setSecurCode(code);
    }
    else
        changeSecurCode(customer->next, userName, code);
}

void DoublyList::changeCardName(ptr &customer, const std::string &userName, std::string newName)
{
    if (customer->userName == userName)
    {
        customer->card.setCardName(newName);
    }
    else
        changeCardName(customer->next, userName, newName);
}
/*
 *                  Public Functions
 */
/*
 *  Bool Return Type
 */
// Search Functionality
bool DoublyList::search(const string& userName)
{
    return search(head, userName);
}

bool DoublyList::login(string userName, string password)
{
    return login(this->head, userName, password);
}

/*
 * String Return Type
 */
string DoublyList::showPassword(const std::string &userName)
{
    return showPassword(head, userName);
}

/*
 *  Void Return Type
 */
// Append Functionality
void DoublyList::append(string userName, string password, string addy, string city, string state, int zip,
                        int cardNum, int expDate, int securCode, string cardName)
{
    ptr newCustomer = make_shared<Customer>(userName);
    newCustomer->setBasics(userName, std::move(password));
    newCustomer->setShipping(std::move(addy), std::move(city), std::move(state), zip);
    newCustomer->setPayment(cardNum, expDate, securCode, std::move(cardName));

    if (head == nullptr) // if empty list, update head
        head = newCustomer;
    else // otherwise, add to end of list
    {
        tail->next = newCustomer;
        newCustomer->prev = tail;
    }

    // update tail
    tail = newCustomer;
}

// Updaters
void DoublyList::changeName(string oldName, std::string newName)
{
    changeName(head, oldName, newName);
}

void DoublyList::changePass(std::string userName, std::string newPass)
{
    changePass(head, userName, newPass);
}

void DoublyList::changeAddy(const std::string& userName, const std::string& newAddy)
{
    changeAddy(this->head, userName, newAddy);
}

void DoublyList::changeCity(const string& userName, const string& newCity)
{
    changeCity(head, userName, newCity);
}

void DoublyList::changeState(const string& userName, const string& newState)
{
    changeState(head, userName, newState);
}

void DoublyList::changeZip(const string& userName, int newZip)
{
    changeZip(head, userName, newZip);
}

void DoublyList::changeCard(const std::string &userName, int newNum)
{
    changeCard(this->head, userName, newNum);
}

void DoublyList::changeExpDate(const std::string &userName, int newExpDate)
{
    changeExpDate(this->head, userName, newExpDate);
}

void DoublyList::changeSecurCode(const std::string &userName, int code)
{
    changeSecurCode(this->head, userName, code);
}

void DoublyList::changeCardName(const string &userName, string newName)
{
    changeCardName(head, userName, newName);
}
// Destructor Definition
DoublyList::~DoublyList()
{
    while(peek())
    {
        remove(head, head->getName());
    }
}
