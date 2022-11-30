#include "OrderHistory.h"
#include <string>
#include "ShoppingCart.h"



std::string OrderHistory::setUserName(std::string username) {

	this->UserName = UserName;
}

std::string OrderHistory::setOrderContents(std::string item) {
	
	item = curre
}


void AddOrdHistory(string& item, vector<ShoppingCart>& cart, std::string OrderFile) {

	ShoppingCart currentitem;

	for (i = 0; i < cart.size; i++) {

		current item = cart.at(i);

		if (UserName == UserName)
		{
			
			fstream file;

			file.open(OrderFile, ios::app);
			if (file.is_open()) {
				file << 
			}
		}



	}

}
void ViewOrdHistory();
void DeleteOrdHistory();

void OrderHistory::append(int data) {

	node* tmp = new node(data);
	tmp->prev = tail;

	if (head == nullptr)
	{
		head = tmp;
	}
	else
	{
		tail->next = tmp;
	}
	tail = tmp;
}
bool OrderHistory::remove(int data) {
	node* tmp = head;
	while (tmp != nullptr)
	{
		if (tmp->data == data)
		{
			if (tmp->prev != nullptr)
			{
				tmp->prev->next = tmp->next;
			}
			if (tmp->next != nullptr)
			{
				tmp->next->prev = tmp->prev;

			}
			if (tmp == head)
			{
				head = tmp->next;

			}
			if (tmp == tail)
			{
				tail = tmp->prev;
			}

			delete tmp;
			return true;
		}
		tmp = tmp->next;
	}
	return false;

}
void OrderHistory::display(int data, std::ostream &os) {
	node* tmp = head;
	
	while (tmp != nullptr)
	{
		os << tmp->data << std::endl;
		tmp = tmp->next;
	}
}
void OrderHistory::prepend(int data) {
	node* tmp = new node(data);

	tmp->next = head;

	if (head == nullptr)
	{
		tail = tmp;
	}
	else
	{
		head->prev = tmp;
	}
	head = tmp;
}