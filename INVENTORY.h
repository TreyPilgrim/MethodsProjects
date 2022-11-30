#ifndef INVENTORY_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;
class Inventory{
protected:
    string Name="";
    string directorName="";
    string genre="";
    float price=0.0;
    int stock=0;
    string movieID="";
public:
    Inventory();
    Inventory(string Name, string directorName, string genre, float price, int stock, string movieID);
    void viewAllInventory(vector<Inventory> &list);
    void viewByDirector(vector<Inventory> &list);
    void viewByGenre(vector<Inventory> &list);
    void viewLowtoHigh(vector<Inventory> &list);
    void ViewHightoLow(vector<Inventory> &list);
    int getStock();
    int getPrice();
    string getName();
    string getMovieID();
    string getDirectorName();
    string getGenre();
    void setMovieID(string movieID);
    void setStock(int stock);
    void setName(string Name);
    void setPrice (int price);
    void setDirectorName(string directorName);
    void setGenre(string genre);
    bool searchByName(vector<Inventory>&list ,string Name);
    bool searchByDirector(vector<Inventory>&list, string directorName);
    bool searchByGenre(vector<Inventory>&list, string genre);
    void readfile(vector<Inventory> &list);
    void display(vector<Inventory> list);
    int convertStringtoInt(string str);
    float convertStringtoFloat(string str);
};

#endif
	
	
