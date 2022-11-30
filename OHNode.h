#pragma once
# include<string>
using namespace std;
class node
{
public:
	int data;
	node *next;
	node *prev;
    string UserName ="";
    string OrderContents ="";

	node(): data(0), next(nullptr), prev(nullptr){}
	node(string UserName, string OrderContents): UserName(UserName),OrderContents(OrderContents), next(nullptr),prev(nullptr){}
	node(string UserName, string OrderContents, node* next, node* prev) : UserName(UserName),OrderContents(OrderContents), next(next), prev(prev) {};

};
