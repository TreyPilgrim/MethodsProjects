#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H
#include <string>
#include <vector>
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
  void AddToCart(vector<Inventory> &list, vector<ShoppingCart> &cart);
  void RemoveFromCart(string item);
  void displayCartTotal(vector<ShoppingCart> cart);
  void displayCart(vector<ShoppingCart> cart);
  string GetName();
  int GetPrice();
  int GetQuantity();
  void SetName(string name);
  void SetPrice(int price);
  void SetQuantity(int quantity);
  vector<ShoppingCart> cart;
};

#endif
