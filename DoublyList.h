#pragma once
#include <string>
#include <memory>
#include "Customer.h"
using namespace std;
using ptr = std::shared_ptr<Customer>;

class DoublyList
{
private:
    ptr head;
    ptr tail;

    bool peek();
    bool search(ptr &customer, const string& userName);
    bool remove(ptr &customer, const string& userName);

public:
    DoublyList():
            head {nullptr}, tail {nullptr} {}

    ~DoublyList();

    bool search(const string& userName);

    void append(string &userName);
    void prepend(string &userName);


};

