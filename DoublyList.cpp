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
    if(!this->peek())
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
/*
 *  Void Return Type
 */
// Append Functionality
void DoublyList::append(string &userName)
{
    // Check that userName is unique
    // if it's not, return
    if (this->search(userName))
    {
        cout << userName << " already exists in database." << endl;
        return;
    }

    ptr newCustmer = make_shared<Custmer>(userName);
    if (head == nullptr) // if empty list, update head
        head = newCustmer;
    else // otherwise, add to end of list
    {
        tail->next = newCustmer;
        newCustmer->prev = tail;
    }

    // update tail
    tail = newCustmer;

}

// Prepend Functionality
void DoublyList::prepend(std::string &userName)
{
    // check that userName is unique
    if (search(head, userName))
    {
        cout << userName << " already exists in database." << endl;
        return;
    }

    ptr newCustmer = make_shared<Custmer>(userName);
    if (tail == nullptr) // if empty list, update tail
        tail = newCustmer;
    else // otherwise add newCustmer to beginning of list
    {
        head->prev = newCustmer;
        newCustmer->next = head;
    }

    // update head
    head = newCustmer;
}

// Destructor Definition
DoublyList::~DoublyList()
{
    while(peek())
    {
        remove(head, head->getName());
    }
}