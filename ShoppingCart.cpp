#include <cstring>
#include <string>
#include <iostream>
#include <ostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include "ShoppingCart.h"
using namespace std;

ShoppingCart::ShoppingCart() {
  total = 0;
}
string ShoppingCart::GetUserName() {
  return cartUserName;
}
string ShoppingCart::GetName() {
  return name;
}
int ShoppingCart::GetPrice() {
  return price;
}
int ShoppingCart::GetQuantity() {
  return quantity;
}
void ShoppingCart::SetName(string name){
  this->name = name;
}
void ShoppingCart::SetPrice(int price) {
  this->price = price;
}
void ShoppingCart::SetQuantity(int quantity) {
  this->quantity = quantity;
}
void ShoppingCart::AddToCart(vector<Inventory> &list, vector<ShoppingCart> &cart, string InventoryFile, string ShoppingFile) {
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

  //ofstream ShoppingFile;
  
  fstream file;
  
  file.open(ShoppingFile, ios::app);
  if (file.is_open()) {
    file << name << endl << usernum << endl << price << endl;
  }

  file.close();
  }
void ShoppingCart::RemoveCartFromPerson(string name) {
   int oldsize = cart.size();

   for (int i = 0; i < cart.size(); i++){

    if (cart.at(i).GetName() == name)

    cart.erase(cart.begin()+i);

}

  if(oldsize == cart.size()) {

    cout << cartUserName << endl;
  }
}
void ShoppingCart::RemoveFromCart(string item) {
  int oldsize = cart.size();

  for (int i = 0; i < cart.size(); i++){

    if (cart.at(i).GetName() == item)

    cart.erase(cart.begin()+i);

}

if(oldsize == cart.size()) {

cout << "item not found in cart. Nothing removed." << endl;
}
  }

void ShoppingCart::displayCartTotal(vector<ShoppingCart> cart) {
  total = 0;
  for (int i = 0; i < cart.size(); i++) {
    ShoppingCart curritem;
    curritem = cart.at(i);
    total += (curritem.GetPrice() * curritem.GetQuantity());
  }
  cout << "Total: $" << total << endl;
  return;
}

void ShoppingCart::displayCart(vector<ShoppingCart> cart) {
  cout << "Item: "<< "  | " << " Quantity" << endl;
  for (int i = 0; i < cart.size(); i++) {
    ShoppingCart curritem;
    curritem = cart.at(i);
      cout << curritem.GetName() << "   -   " << curritem.GetQuantity()<< endl;
  }
  return;
}
