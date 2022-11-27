#pragma once
#include"node.h"
#include <ostream>
#include <ostream>
class DoubLinklist
{
private:
	node* head;
	node* tail;

public:DoubLinklist(): head(nullptr), tail(nullptr) {}
	  ~DoubLinklist();

	  void append(int data);
	  bool remove(int data);
	  void display(int data, std::ostream &os);
	  void prepend(int data);
};

