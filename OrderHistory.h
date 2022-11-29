#pragma once
#include<string>
#include<iostream>

using namespace std;
class OrderHistory
{
private:
	string item;
	string OrderContents;


public:
	void AddOrdHistory(string &item, vector<ShoppingCart> &cart);
	void ViewOrdHistory();
	void DeleteOrdHistory();

	void setOrdContents();
	std::string SetUserName(std:: string username);
	
	
	void getCartID(int);

};
