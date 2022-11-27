#include "DoubLinklist.h"
#include<ostream>


DoubLinklist::~DoubLinklist() {
	node* tmp = head;

	while (tmp != nullptr)
	{
		head = head->next;
		delete tmp;
		tmp = head;


	}
	tail = nullptr;

}   

void DoubLinklist::append(int data) {

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
bool DoubLinklist::remove(int data) {
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
void DoubLinklist::display(int data, std::ostream &os) {
	node* tmp = head;
	
	while (tmp != nullptr)
	{
		os << tmp->data << std::endl;
		tmp = tmp->next;
	}
}
void DoubLinklist::prepend(int data) {
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