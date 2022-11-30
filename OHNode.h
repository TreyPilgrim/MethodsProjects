#pragma once
class node
{
public:
	int data;
	node *next;
	node *prev;

	node(): data(0), next(nullptr), prev(nullptr){}
	node(int data): data(data), next(nullptr),prev(nullptr){}
	node(int data, node* next, node* prev) : data(data),
		next(next), prev(prev) {};

};