#include "INVENTORY.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
# include <sstream>
#include <cstdlib>
using namespace std;

Inventory::Inventory(){
    Name = "";
    directorName="";
    genre="";
    price=0.0;
    stock=0;
    movieID= "";
}
Inventory::Inventory(string Name, string directorName, string genre, float price, int stock, string movieID){
    this-> Name = Name;
    this-> directorName = directorName;
    this-> genre = genre;
    this-> price = price;
    this-> stock = stock;
    this-> movieID = movieID;
}




// display functions

void Inventory::viewAllInventory(vector<Inventory> &list){
    for(int i=0; i <list.size(); i = i+1 ){
        int indexSmallest= i;
        for(int j = i+1; j<list.size(); j = j+1) {
            int compare;
            string movie1;
            string movie2;
            movie1 = list[j].getName();
            movie2 = list[indexSmallest].getName();
            // compare the director at the smallest index and the index before the smallest
            compare = movie2.compare(movie1);
            // swap the director names if the index before the smallest is actually the smallest
            if (compare >= 1) {
                indexSmallest = j;
            }
        }
        swap(list[i], list[indexSmallest]);
    }
}


void Inventory::viewByDirector(vector<Inventory> &list){
    for(int i=0; i <list.size(); i = i+1 ){
        int indexSmallest= i;
        for(int j = i+1; j<list.size(); j = j+1) {
            int compare;
            string director1;
            string director2;
            director1 = list[j].getDirectorName();
            director2 = list[indexSmallest].getDirectorName();
            // compare the director at the smallest index and the index before the smallest
            compare = director2.compare(director1);
            // swap the director names if the index before the smallest is actually the smallest
            if (compare >= 1) {
                indexSmallest = j;
            }
        }
        swap(list[i], list[indexSmallest]);
    }
    return;
}
void Inventory:: viewLowtoHigh(vector<Inventory> &list){
    for(int i=0; i <list.size(); i = i+1 ){
        int indexSmallest= i;
        for(int j = i+1; j<list.size(); j = j+1) {
            int compare;
            string price1;
            string price2;
            price1 = list[j].getPrice();
            price2 = list[indexSmallest].getPrice();
            if (price1 >= price2) {
                indexSmallest = j;
            }
        }
        swap(list[i], list[indexSmallest]);

    }


}
void Inventory:: ViewHightoLow(vector<Inventory> &list) {
    for (int i = 0; i < list.size(); i = i + 1) {
        int indexSmallest = i;
        for (int j = i + 1; j < list.size(); j = j + 1) {
            int compare;
            string price1;
            string price2;
            price1 = list[j].getPrice();
            price2 = list[indexSmallest].getPrice();
            if (price2 >= price1) {
                indexSmallest = j;
            }
        }
        swap(list[i], list[indexSmallest]);

    }

}




//searches
bool Inventory::searchByDirector(vector<Inventory>&list, string directorName) {
    for(int i=0; i <list.size(); i = i+1 ){
        int indexSmallest= i;
        for(int j = i+1; j<list.size(); j = j+1) {
            int compare;
            string director1;
            string director2;
            director1 = list[j].getDirectorName();
            director2 = list[indexSmallest].getDirectorName();
            // compare the director at the smallest index and the index before the smallest
            compare = director2.compare(director1);
            // swap the director names if the index before the smallest is actually the smallest
            if (compare >= 1) {
                indexSmallest = j;
            }
        }
        swap(list[i], list[indexSmallest]);
    }

    int low = 0;
    int high = list.size() - 1;
    int mid;

    while (high >= low) {
        mid = (low + high) / 2;
        // if the middle song title is lower than then the song title that is being searched for change the low and mid
        if (list[mid].getDirectorName().compare(directorName) < 0) {
            low = mid + 1;
            mid = (low + high) / 2;
        }
            // if the middle song title is higher than then the song title that is being searched for change the high and mid
        else if(list[mid].getDirectorName().compare(directorName) > 0){
            high = mid - 1;
            mid = (low + high) / 2;
        }
        else{
            return mid;
        }
        return -1;
    }
    return 1;
}

bool Inventory::searchByGenre(vector<Inventory> &list, string genre) {
    for(int i=0; i <list.size(); i = i+1 ){
        int indexSmallest= i;
        for(int j = i+1; j<list.size(); j = j+1) {
            int compare;
            string genre1;
            string genre2;
            genre1 = list[j].getGenre();
            genre2 = list[indexSmallest].getGenre();
            // compare the director at the smallest index and the index before the smallest
            compare = genre2.compare(genre1);
            // swap the director names if the index before the smallest is actually the smallest
            if (compare >= 1) {
                indexSmallest = j;
            }
        }
        swap(list[i], list[indexSmallest]);
    }

    int low = 0;
    int high = list.size() - 1;
    int mid;

    while (high >= low) {
        mid = (low + high) / 2;
        // if the middle song title is lower than then the song title that is being searched for change the low and mid
        if (list[mid].getGenre().compare(genre) < 0) {
            low = mid + 1;
            mid = (low + high) / 2;
        }
            // if the middle song title is higher than then the song title that is being searched for change the high and mid
        else if(list[mid].getGenre().compare(genre) > 0){
            high = mid - 1;
            mid = (low + high) / 2;
        }
        else{
            return mid;
        }
        return -1;
    }
    return 1;
}

bool Inventory::searchByName(vector<Inventory> &list, string Name) {
    for(int i=0; i <list.size(); i = i+1 ){
        int indexSmallest= i;
        for(int j = i+1; j<list.size(); j = j+1) {
            int compare;
            string Name1;
            string Name2;
            Name1 = list[j].getName();
            Name2 = list[indexSmallest].getName();
            // compare the director at the smallest index and the index before the smallest
            compare = Name2.compare(Name1);
            // swap the director names if the index before the smallest is actually the smallest
            if (compare >= 1) {
                indexSmallest = j;
            }
        }
        swap(list[i], list[indexSmallest]);
    }

    int low = 0;
    int high = list.size() - 1;
    int mid;

    while (high >= low) {
        mid = (low + high) / 2;
        // if the middle song title is lower than then the song title that is being searched for change the low and mid
        if (list[mid].getName().compare(Name) < 0) {
            low = mid + 1;
            mid = (low + high) / 2;
        }
            // if the middle song title is higher than then the song title that is being searched for change the high and mid
        else if(list[mid].getName().compare(Name) > 0){
            high = mid - 1;
            mid = (low + high) / 2;
        }
        else{
            return mid;
        }
        return 0;
    }
    return 1;
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
string Inventory::getMovieID(){
    return movieID;
}
string Inventory::getDirectorName(){
    return directorName;
}
string Inventory::getGenre(){
    return genre;
}
//setters

void Inventory::setMovieID(string movieID){
    this -> movieID = movieID;
}
void Inventory::setStock(int stock){
    this -> stock = stock;
}

void Inventory::setName(string Name){
    this-> Name = Name;
}
void Inventory:: setPrice (int price){
    this -> price =price;
}
void Inventory::setDirectorName(string directorName){
    this ->  directorName = directorName;
};
void Inventory::setGenre(string genre){
    this -> genre = genre;

}
void readfile(vector<Inventory> &list);
void display(vector<Inventory> list);
int convertStringtoInt(string str);
float convertStringtoFloat(string str);

int convertStringtoInt(string str){
    stringstream ss;
    ss << str;
    int num;
    ss>> num;
    return num;
}
float convertStringtoFloat(string str){
    stringstream ss;
    ss << str;
    float num;
    ss>> num;
    return num;
}

void readfile(vector<Inventory>&list)
{
    ifstream infile;
    string line;


    infile.open("INVENTORY.txt");

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

        string Name, directorName, genre,price,stock, movieID;
        float price1;
        float stock1;
        Name = line;
        cout<<Name<<endl;

        getline(infile,line);
        directorName = line;
        cout<< "It got the name." <<endl;
        getline(infile,line);
        genre = line;
        cout<< "It got the name." <<endl;
        getline(infile,line);
        price=line;
        cout<< "It got the name." <<endl;
        getline(infile,line);
        stock =line;
        cout<< "It got the name." <<endl;
        getline(infile,line);
        movieID =line;
        cout<< "It got the name." <<endl;
        getline(infile, line);

        price1 = convertStringtoFloat(price);
        stock1 = convertStringtoInt(stock);

        Inventory tmp;
        tmp.setName(Name);
        cout << tmp.getName()<<endl;
        tmp.setDirectorName(directorName);
        tmp.setGenre(genre);
        tmp.setPrice(price1);
        tmp.setStock(stock1);
        tmp.setMovieID(movieID);
        cout << tmp.getName()<<endl;
        cout << tmp.getDirectorName()<<endl;
        list.push_back(tmp);
        cout << list.size()<<endl;

    }

    infile.close();
}

void display(vector<Inventory>list){
    for(int i=0; i< list.size(); i++){
        Inventory currItem;
        currItem = list.at(i);
        cout << i+1<<". "<<currItem.getName()<<endl;
        cout << currItem.getDirectorName()<<endl;

    }
}
