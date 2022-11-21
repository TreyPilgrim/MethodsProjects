#include <cstring>
#include <iostream>
#include <vector>
#include <cstdlib>
#include "ShoppingCart.h"
using namespace std;
 
ShoppingCart::ShoppingCart() {
  cout << "Creating a new shopping cart" << endl;
  total = 0;
}
string ShoppingCart::GetName() {
  return cartUserName;
}
int ShoppingCart::GetPrice() {
  return price;
}
int ShoppingCart::GetQuantity() {
  return quantity;
}
string ShoppingCart::SetName(string name){
  this->name = name;
  return name;
}
int ShoppingCart::SetPrice(int price) {
  this->price = price;
  return price;
}
int ShoppingCart::SetQuantity(int quantity) {
  this->quantity = quantity;
  return quantity;
}
void ShoppingCart::AddToCart(vector<Inventory> &list, vector<ShoppingCart> cart) {
  int userInput;
  Inventory currMovie;
  ShoppingCart item;
  int usernum;
  

  while(true) {
    cout << "Which Movie Would You Like to Add?: ";
    cin >> userInput;
    if(userInput <= list.size()) {
      break;
    }
    else {
      cout << "Invalid Number. Try Again." << endl;
      continue;
    }
  }
  currMovie = list.at(userInput-1);
  while(true) {
    cout << "How Many Would YouLike to Add?: ";
    cin >> usernum;
    if(usernum <= currMovie.getStock()) {
      break;
    }
    else {
      cout << "Not enough items in stock. Try Again." << endl;
      continue;
    }
  }  
  string name = currMovie.getName();
  int price = currMovie.getPrice();
  int stock = usernum;
    item.SetName(name);
    item.SetQuantity(usernum);
    item.SetPrice(price);
    cart.push_back(item);
    
  }

void ShoppingCart::RemoveFromCart(string item) {
  int oldsize = cart.size();

  for (int i = 0; i < cart.size(); i++){

    if (cart.at(i).GetName() == item)

    cart.erase(cart.begin()+i);

}

if(oldsize == cart.size())

cout << "item not found in cart. Nothing removed." << endl;
}

void ShoppingCart::displayCartTotal(vector<ShoppingCart> cart, ShoppingCart item) {
  total = 0;
  for (int i = 0; i < cart.size(); i++) {
    total += cart.at(i).SetQuantity(item.GetQuantity()) * cart.at(i).SetPrice(item.GetPrice());
  }
  cout << "Total: " << total << endl;
  return;
}

void ShoppingCart::displayCart(vector<ShoppingCart> cart, ShoppingCart item) {
  cout << "Item: "<< "  | " << " Quantity" << endl;
  for (int i = 0; i < cart.size(); i++) {
      cout << cart.at(i).SetName(item.GetName()) << "   -   " << cart.at(i).SetQuantity(item.GetQuantity()) << endl;
  }
  return;
}

