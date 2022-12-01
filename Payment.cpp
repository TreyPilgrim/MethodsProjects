#include "Payment.h"

#include <utility>
// Getters
int Payment::getCardNum()
{
    return this->cardNum;
}

int Payment::getExpDate() const
{
    return this->expDate;
}

int Payment::getSecurCode() const
{
    return this->securityCode;
}

string Payment::getName()
{
    return this->cardName;
}
// setters
void Payment::setCardNum(int num)
{
    cardNum = num;
}

void Payment::setExpDate(int date)
{
    expDate = date;
}

void Payment::setSecurCode(int code)
{
    securityCode = code;
}

void Payment::setCardName(std::string name)
{
    cardName = std::move(name);
}

void Payment::setPayment(int cardNum, int expDate, int securCode, string cardName)
{
    this->cardNum = cardNum;
    this->expDate = expDate;
    this->securityCode = securCode;
    this->cardName = cardName;
}
// Checkers
bool Payment::checkCardNum(int num)
{
    if (num >= 0 && num <= 9999)
        return true;
    else
        return false;
}

bool Payment::checkExpDate(int date)
{
    if (date >= 0122 && date <= 1299) // MM/YY format
        return true;
    else
        return false;
}

bool Payment::checkSecurCode(int code)
{
    if (code >= 0 && code <= 999)
        return true;
    else
        return false;
}
