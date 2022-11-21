
#include <string>
#include <vector>
#include "INVENTORY.h"
using namespace std;

class ShoppingCart {
private:
  int total;
  string cartUserName;
  string name;
  int price;
  int quantity;

public:
  ShoppingCart();
  void AddToCart(vector<Inventory> &list, vector<ShoppingCart> cart);
  void RemoveFromCart(string item);
  void displayCartTotal(vector<ShoppingCart> cart, ShoppingCart item);
  void displayCart(vector<ShoppingCart> cart, ShoppingCart item);
  string GetName();
  int GetPrice();
  int GetQuantity();
  string SetName(string name);
  int SetPrice(int price);
  int SetQuantity(int quantity);
  vector<ShoppingCart> cart;
};