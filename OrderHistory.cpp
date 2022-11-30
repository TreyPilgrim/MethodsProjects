#include "OrderHistory.h"
#include "ShoppingCart.h"



std::string OrderHistory::SetUserName(std::string username) {

	this->UserName = UserName;
}

void OrderHistory::setOrdContents() {

}


void AddOrdHistory(string UserName, vector<ShoppingCart> &cart, std::string OrderFile) {

	ShoppingCart currentitem;
  OrderHistory A;

	for(int i = 0; i < cart.size(); i++) {

		currentitem = cart.at(i);

		if (UserName == currentitem.GetUserName()){
            A.append(currentitem.GetUserName(), currentitem.GetName());
            }
    }
			
			fstream file;

			file.open(OrderFile, ios::app);
			if (file.is_open()) {
				file << "bloop" << endl;
			}
		}






void ViewOrdHistory();
void DeleteOrdHistory();

void OrderHistory::append(string UserName, string OrderContents) {

	node* tmp = new node(UserName, OrderContents);
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
bool OrderHistory::remove(string UserName, string OrderContents) {
	node* tmp = head;
	while (tmp != nullptr)
	{
		if (tmp->UserName== UserName)
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
void OrderHistory::display(string UserName, string OrderContents, std::ostream &os) {
	node* tmp = head;
	
	while (tmp != nullptr)
	{
		os << tmp->data << std::endl;
		tmp = tmp->next;
	}
}
void OrderHistory::prepend(string UserName, string OrderContents) {
	node* tmp = new node(UserName, OrderContents);

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
