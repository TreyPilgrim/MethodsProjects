#pragma once
#include <string>
#include <memory>
#include "Customer.h"
#include "Payment.h"
using namespace std;
using ptr = std::shared_ptr<Customer>;

class DoublyList: public Payment
{
private:
    ptr head;
    ptr tail;

    bool peek();
    bool search(ptr &customer, const string& userName);
    bool remove(ptr &customer, const string& userName);
    bool login (ptr &customer,string userName, string password);

    string showPassword (ptr &customer, const string &userName);

    void changeName(ptr &customer, const string& oldName, const string& newName);
    void changePass(ptr &customer, const string &userName, const string& newPass);

    void changeAddy (ptr & customer, const string &userName, const string &newAddy);
    void changeCity(ptr &customer, const string &userName, const string &newCity);
    void changeState(ptr &customer, const string &userName, const string &newState);
    void changeZip(ptr &customer, const string &userName, int newZip);

    void changeCard(ptr &customer, const string &userName, int newNum);
    void changeExpDate(ptr &customer, const string &userName, int newExpDate);
    void changeSecurCode(ptr &customer, const string &userName, int code);
    void changeCardName(ptr &customer, const string &userName, string newName);

public:
    DoublyList():
            head {nullptr}, tail {nullptr} {}

    ~DoublyList();

    bool search(const string& userName);
    bool login (string userName, string password);

    string showPassword(const string & userName);

    void append(string userName, string password, string addy, string city, string state, int zip,
                            int cardNum, int expDate, int securCode, string cardName);

    // basic info editing
    void changeName(string oldName, string newName);
    void changePass(string userName, string newPass);

    // shipping editing
    void changeAddy(const string& userName, const string& newAddy);
    void changeCity(const string& userName, const string& newCity);
    void changeState(const string& userName, const string& newState);
    void changeZip(const string& userName, int newZip);

    // Payment editing
    void changeCard(const string &userName, int newNum);
    void changeExpDate(const string &userName, int newExpDate);
    void changeSecurCode(const string &userName, int code);
    void changeCardName(const string &userName, string newName);

    bool remove(const string& userName) { return remove(this->head, userName);}


};

