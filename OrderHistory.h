#include "ShoppingCart.h"
# include "OHNode.h"
# include <string>


class OrderHistory
{
private:
	string item;
	string UserName;
	string OrderContents;
	node* head;
	node* tail;


public:
	OrderHistory(): head(nullptr), tail(nullptr) {}
	void append(string UserName, string OrderContents);
	bool remove(string UserName, string OrderContents);
	void display(string UserName, string OrderContents, std::ostream &os);
	void prepend(string UserName, string OrderContents);
	void AddOrdHistory(string &item, vector<ShoppingCart> &cart);
	void ViewOrdHistory();
	void DeleteOrdHistory();

	void setOrdContents();
	std::string SetUserName(std:: string username);


	void getCartID(int);

};
