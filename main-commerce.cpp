#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <sstream>
#include "ShoppingCart.h"
#include "OrderHistory.h"
using namespace std;
void readfile(vector<Inventory> &list);
void display(vector<Inventory> list);
int convertStringtoInt(string str);
float convertStringtoFloat(string str);
int main() {
    vector <Inventory> list;
    vector <ShoppingCart> item;
    ShoppingCart B;
    Inventory A;
    OrderHistory C;
    readfile(list);
    while (1) {
        string option;
        // displays menu
        cout << "Menu: " << endl;
        cout << "0. Exit" << endl;
        cout << "1. Login" << endl;
        cout << "2. Create Account" << endl;
        cout << "3. Forgot Password" << endl;
        cout << "Enter choice: ";
        cin >> option;
        cout << endl;
        // exit
        if (option == "0") {
            cout << "Thank You for Shopping with us" << endl;
            break;
        }
            //  add menu option handling

        else if (option == "1") {
            string option2;
            while (1) {
                // displays menu
                cout << "Menu: " << endl;
                cout << "0.Exit" << endl;
                cout << "1. View Cart" << endl;
                cout << "2. View Inventory" << endl;
                cout << "3. Checkout" << endl;
                cout << "4. Edit Account" << endl;
                cout << "5. View Order History" << endl;
                cout << "6. Logout" << endl;
                cout << "7. Delete Account" << endl;
                cout << "Enter choice: ";
                cin >> option2;
                cout << endl;
                if (option2 == "0") {
                    break;
                }
                if (option2 == "1") {
                    B.displayCart(item);
                    continue;
                }
                if (option2 == "2") {
                    string option3;
                    cout << "Display Options" << endl;
                    cout << "1. View All " << endl;
                    cout << "2. View by Genre " << endl;
                    cout << "3. View by Director" << endl;
                    cout << "4. View Low to High " << endl;
                    cout << "5. View High to Low " << endl;
                    cout << "6.  Search By Name " << endl;
                    cout << "7.  Search By Genre " << endl;
                    cout << "8.  Search By Director " << endl;
                    cout << "Enter Your Choice: ";
                    cin >> option3;
                    cout << endl;

                    if (option3 == "1") {
                        string addOption;
                        A.viewAllInventory(list);
                        display(list);
                        cout << "Do you want to add an item? Y or N" << endl;
                        cin >> addOption;
                        if ((addOption == "Y") or (addOption == "y")) {
                            int InventoryOption;
                            B.AddToCart(list, item, "INVENTORY.txt", "ShoppingCart.txt");
                            B.displayCart(item);
                            B.displayCartTotal(item);
                            break;
                        } else {
                            break;
                        }


                    }
                    if (option3 == "2") {
                        string addOption;
                        A.viewByGenre(list);
                        display(list);
                        cout << "Do you want to add an item? Y or N" << endl;
                        cin >> addOption;
                        if ((addOption == "Y") or (addOption == "y")) {
                            int InventoryOption;
                            B.AddToCart(list, item, "INVENTORY.txt", "ShoppingCart.txt");
                            B.displayCart(item);
                            B.displayCartTotal(item);
                            break;
                        } else {
                            break;
                        }
                    }
                    if (option3 == "3") {
                        string addOption;
                        A.viewByDirector(list);
                        display(list);
                        cout << "Do you want to add an item? Y or N" << endl;
                        cin >> addOption;
                        if ((addOption == "Y") or (addOption == "y")) {
                            int InventoryOption;
                            B.AddToCart(list, item, "INVENTORY.txt", "ShoppingCart.txt");
                            B.displayCart(item);
                            B.displayCartTotal(item);
                            break;
                        } else {
                            break;
                        }

                    }
                    if (option3 == "4") {
                        string addOption;
                        A.viewLowtoHigh(list);
                        display(list);
                        cout << "Do you want to add an item? Y or N" << endl;
                        cin >> addOption;
                        if ((addOption == "Y") or (addOption == "y")) {
                            int InventoryOption;
                            B.AddToCart(list, item, "INVENTORY.txt", "ShoppingCart.txt");
                            B.displayCart(item);
                            B.displayCartTotal(item);
                            break;
                        } else {
                            break;
                        }
                    }
                    if (option3 == "5") {
                        string addOption;
                        A.ViewHightoLow(list);
                        display(list);
                        cout << "Do you want to add an item? Y or N" << endl;
                        cin >> addOption;
                        if ((addOption == "Y") or (addOption == "y")) {
                            int InventoryOption;
                            B.AddToCart(list, item, "INVENTORY.txt", "ShoppingCart.txt");
                            B.displayCart(item);
                            B.displayCartTotal(item);
                            break;
                        } else {
                            break;
                        }

                    }
                    if (option3 == "6") {
                        string nameOption;
                        cout << "What are you searching for?" << endl;
                        cin >> nameOption;
                        A.searchByName(list ,nameOption);
                        break;

                    }
                    if (option3 == "7") {
                        string genreOption;
                        cout << "What are you searching for?" << endl;
                        cin >> genreOption;
                        A.searchByGenre(list ,genreOption);
                        break;
                    }
                    if (option3 == "8") {
                        string directorOption;
                        cout << "What are you searching for?" << endl;
                        cin >> directorOption;
                        A.searchByGenre(list ,directorOption);
                        break;
                    }
                }
                else if (option2 == "3") {
                    C.AddOrdHistory();
                    B.RemoveCartFromPerson();

                }
                else if (option2 == "4") {
                    cout << "not completed";
                }
                else if (option2 == "5") {
                    C.DeleteOrdHistory();
                    cout << "not completed";
                }
                else if (option2 == "6") {
                    cout << "not completed";
                }
                else if (option2 == "7") {
                    cout << "not completed";
                }





                else if (option == "2") {
                    cout << "not completed";

                }
                else if (option == "3") {
                    cout << "not completed";

                }
                else {
                    // if they give an invalid option display error message and ask for another option
                    cout << "Invalid Choice! Choose again." << endl;
                    continue;
                }
                return 0;
            }
        }
    }}
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

        getline(infile,line);
        directorName = line;

        getline(infile,line);
        genre = line;

        getline(infile,line);
        price=line;

        getline(infile,line);
        stock =line;

        getline(infile,line);
        movieID =line;

        getline(infile, line);

        price1 = convertStringtoFloat(price);
        stock1 = convertStringtoInt(stock);

        Inventory tmp;
        tmp.setName(Name);

        tmp.setDirectorName(directorName);
        tmp.setGenre(genre);
        tmp.setPrice(price1);
        tmp.setStock(stock1);
        tmp.setMovieID(movieID);

        list.push_back(tmp);


    }

    infile.close();
    list.pop_back();

}
void display(vector<Inventory>list){
    for (int i = 0; i < list.size(); i++) {
        Inventory currItem;
        currItem = list.at(i);
        cout << i + 1 << ". " << currItem.getName() << endl;
        cout << "Director:" << currItem.getDirectorName() << endl;
        cout << "Genre:" << currItem.getGenre() << endl;
        cout << "Price:" << currItem.getPrice() << endl;
    }
}
