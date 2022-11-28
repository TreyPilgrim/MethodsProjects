#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "INVENTORY.h"
using namespace std;

class ShoppingCart {
private:
  int total =0 ;
  string cartUserName ="";
  string name ="";
  int price=0;
  int quantity=0;

public:
  ShoppingCart();
  void AddToCart(vector<Inventory> &list, vector<ShoppingCart> &cart, string InventoryFile, string ShoppingFile);
  void RemoveFromCart(string item);
  void RemoveCartFromPerson(string name)
  void displayCartTotal(vector<ShoppingCart> cart);
  void displayCart(vector<ShoppingCart> cart);
  string GetUserName();
  string GetName();
  int GetPrice();
  int GetQuantity();
  void SetName(string name);
  void SetPrice(int price);
  void SetQuantity(int quantity);
  vector<ShoppingCart> cart;
};


void readfile(vector<Inventory> &list);
void display(vector<Inventory> list);
int convertStringtoInt(string str);
float convertStringtoFloat(string str);

#endif
