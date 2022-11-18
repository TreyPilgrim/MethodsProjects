#include "INVENTORY.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;
    
void Inventory::readfile(vector<Inventory> &list){
	ifstream infile;
    string line;

    infile.open("inventory.txt");

    if(infile.is_open())
    {
        cout << "Successful inventory opening." << endl;
    }

    else
    {
        cout << "Couldn't locate file. Program closing." << endl;
        exit(EXIT_FAILURE);
    }

    while(getline(infile, line))
    {
       

        if(line != "")
        {
            string name,directorName,genre,price,stock,movieID;

            name = line;

            getline(infile, directorName);
			getline(infile, genre);
			getline(infile, price);
			getline(infile,stock);
			getline(infile,movieID);
            Inventory temp(name,directorName,genre,price,stock,movieID);

            playlist.push_back(temp);
        }
    }

    return;
}
}


void Inventory::viewAllInventory(){
        for(int i=0; i< list.size(); ++i){
            Inventory currItem;
            currItem = list.at(i);
            cout << currItem.getName() << " - " << currItem.getPrice() << endl;
			
        }
		return;
}
void Inventory::viewByDirectory(){
	    for(int i=0; i <list.size(); i = i+1 ){
        int indexSmallest= i;
        for(int j = i+1; j<list.size(); j = j+1) {
            int compare;
            string director1;
            string director2;
            title1 = list[j].getDirectorName();
            title2 = list[indexSmallest].getDirectorName();
            // compare the director at the smallest index and the index before the smallest
            compare = director2.compare(director1);
            // swap the director names if the index before the smallest is actually the smallest
            if (compare >= 1) {
                indexSmallest = j;
            }
        }
        swap(playlist[i], playlist[indexSmallest]);
}

	 for(int i=0; i< list.size(); ++i){
            Inventory currItem;
            currItem = list.at(i);
            cout << currItem.getDirectorName() << " - " << currItem.getName() << " - " << currItem.getPrice() << endl;
			
        }
return;
}
void Inventor:: viewLowtoHigh(){
	    for(int i=0; i <playlist.size(); i = i+1 ){
        int indexSmallest= i;
        for(int j = i+1; j<playlist.size(); j = j+1) {
            int compare;
            string title1;
            string title2;
            price1 = playlist[j].getPrice();
            price2 = playlist[indexSmallest].getPrice();
           if (price1 >= price2) {
                indexSmallest = j;
            }
        }
        swap(playlist[i], playlist[indexSmallest]);

    }
	for(int i=0; i< list.size(); ++i){
            Inventory currItem;
            currItem = list.at(i);
            cout << currItem.getName() << " - " << currItem.getPrice() << endl;
			
        }
		return;


}
void Inventor:: viewHightoLow(){
		    for(int i=0; i <playlist.size(); i = i+1 ){
        int indexSmallest= i;
        for(int j = i+1; j<playlist.size(); j = j+1) {
            int compare;
            string title1;
            string title2;
            price1 = playlist[j].getPrice();
            price2 = playlist[indexSmallest].getPrice();
           if (price2 >= price1) {
                indexSmallest = j;
            }
        }
        swap(playlist[i], playlist[indexSmallest]);

    }
	for(int i=0; i< list.size(); ++i){
            Inventory currItem;
            currItem = list.at(i);
            cout << currItem.getName() << " - " << currItem.getPrice() << endl;
			
        }
		return;
	
}
	

//getters
int Inventory::getStock(){
	return stock;
}
int Inventory::getPrice(){
	return price;
}
string Inventory::getName(){
	return Name;
}
int Inventory::getMovieID(){
	return movieID;
}
string Inventory::getDirectorName(){
	return directorName;
}
string Inventory::getGenre(){
	return genre;
}
//setters

void setMovieID(int movieID){
	this -> movieID = movieID;
}
voidsetStock(int stock){
	this -> stock = stock;
}
// display functions 

