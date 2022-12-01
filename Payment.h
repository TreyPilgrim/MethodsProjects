#pragma once
#include <string>

using std::string;
class Payment
{
private:

    int cardNum {0}; // Last 4 digits of card
    int expDate {0000};
    int securityCode {};
    string cardName {"Default"};

public:

    // getters
    int getCardNum();
    int getExpDate() const;
    int getSecurCode() const;
    string getName();

    //setters
    void setCardNum(int num);
    void setExpDate(int date);
    void setSecurCode(int code);
    void setCardName(string name);
    void setPayment(int cardNum, int expDate, int securCode, string cardName);

    // Checkers
    bool checkCardNum(int num);
    bool checkExpDate(int date);
    bool checkSecurCode(int code);

};
