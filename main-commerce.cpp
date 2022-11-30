#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <sstream>
#include "ShoppingCart.h"
#include "Customer.h"
#include "DoublyList.h"

using namespace std;
void readfile(vector<Inventory> &list);
void display(vector<Inventory> list);
int convertStringtoInt(string str);
float convertStringtoFloat(string str);

// Interface Code
void showMenu();
int main() {
    vector <Inventory> list;
    vector <ShoppingCart> item;
    ShoppingCart B;
    Inventory A;
    DoublyList customers;
    readfile(list);
    
    bool loop {true};
    while (loop)
    {
        string option;
        // displays menu (logged out)
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
            loop = false;
            continue;
        }
            //  add menu option handling

        // Login
        else if (option == "1")
        {

            string userName;
            bool found{false};

            // Find Username
            while (!found)
            {
                cout << "Enter your username (case sensitive) \nEnter 'back' to return to previous screen: ";
                cin >> userName;
                found = customers.search(userName);

                if (userName == "back")
                {
                    found = true;
                    continue;
                }

                if (!found)
                    cout << "Invalid Username... " << endl;
            }

            if (userName == "back")
                continue;

            string password;
            bool login = false;
            while(!login)
            {
                cout << "Enter your password (enter 'back' to return to prev screen): ";
                cin >> password;

                if (password == "back")
                {
                    login = true;
                    continue;
                }
                login = customers.login(userName, password);

            }

            if (password == "back")
                continue;

            string option2;
            while (1) {
                // displays menu
                cout << "Main Menu: " << endl;
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
                    loop = false;
                    continue;
                }
                else if (option2 == "1") {
                    B.displayCart(item);
                    continue;
                }
                else if (option2 == "2") {
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
                        cout << "not finished yet;" << endl;
                    }
                    if (option3 == "7") {
                        cout << "not finished yet;" << endl;
                    }
                    if (option3 == "8") {
                        cout << "not finished yet;" << endl;
                    }
                }
                else if (option2 == "3") {
                    cout << "not completed";
                }
                else if (option2 == "4") // Edit Account
                {
                    string choice {"0"};
                    bool menuLoop = true;
                    while (menuLoop)
                    {
                        cout << "\n---------------------------\n";
                        cout << "What would you like to edit?" << endl;
                        cout << "1. Username/Password" << endl;
                        cout << "2. Shipping" << endl;
                        cout << "3. Payment" << endl;
                        cout << "4. Return to previous screen" << endl;
                        cout << "Enter your Choice: " << endl;
                        cin >> choice;


                        if (choice == "1") // username/password
                        {
                            string decision;
                            bool edit (true);
                            cout << "1. Username" << endl;
                            cout << "2. Password" << endl;
                            cout << "3. Go Back" << endl;
                            cout << "Enter: ";
                            cin >> decision;

                            if (decision == "1")
                            {
                                string newName;
                                cout << "Enter new username: ";
                                cin >> newName;

                                customers.changeName(userName, newName);
                                cout << "Done, " << newName << endl;
                                continue;
                            }
                            else if (decision == "2")
                            {
                                string newPass;
                                cout << "Enter new password: ";
                                cin >> newPass;

                                customers.changePass(userName, newPass);
                                continue;
                            }
                            else if (decision == "3")
                            {
                                continue;
                            }
                            else
                            {
                                cout << "Invalid input..." << endl;
                                continue;
                            }
                        }
                        else if (choice == "2") // Shipping
                        {
                            bool shipLoop (true);
                            string decision {"0"};
                            while (shipLoop)
                            {
                                cout << "1. Address" << endl;
                                cout << "2. City" << endl;
                                cout << "3. State" << endl;
                                cout << "4. Zip Code" << endl;
                                cout << "5. Go Back" << endl;

                                if (decision == "1")
                                {
                                    string newAddy;
                                    cout << "Enter new address: ";
                                    getline(cin, newAddy);

                                    customers.changeAddy(userName, newAddy);
                                    continue;
                                }
                                else if (decision == "2")
                                {
                                    string newCity;
                                    cout << "Enter new city: ";
                                    cin >> newCity;

                                    customers.changeCity(userName, newCity);
                                    continue;

                                }
                                else if (decision == "3")
                                {
                                    string newState;
                                    cout << "Enter new state: ";
                                    cin >> newState;

                                    customers.changeState(userName, newState);
                                    continue;
                                }
                                else if (decision == "4")
                                {
                                    int newZip;
                                    cout << "Enter new zip code: ";
                                    cin >> newZip;

                                    customers.changeZip(userName, newZip);
                                    continue;
                                }
                                else if (decision == "5")
                                {
                                    shipLoop = false;
                                    continue;
                                }
                                else
                                {
                                    cout << "Invalid input..." << endl;
                                }
                            }
                        }
                        else if (choice == "3") // Payment
                        {
                            string decision {"0"};
                            bool moneyLoop(true);
                            while (moneyLoop)
                            {
                                cout << "1. Card Number" << endl;
                                cout << "2. Expiration Date" << endl;
                                cout << "3. Security Code" << endl;
                                cout << "4. Card Name" << endl;
                                cout << "5. Go Back" << endl;
                                cout << "Enter choice: ";
                                cin >> decision;

                                if (decision == "1")
                                {
                                    int newNum;
                                    cout << "Enter the last 4 digits of new card: ";
                                    cin >> newNum;

                                    if (customers.checkCardNum(newNum))
                                    {
                                        customers.changeCard(userName, newNum);
                                    }
                                    else
                                        cout << "Input is out of range... " << endl;

                                    continue;
                                }
                                else if (decision == "2")
                                {
                                    int newDate;
                                    cout << "Enter the new Expiration Date iin MMYY format: ";
                                    cin >> newDate;

                                    if(customers.checkExpDate(newDate))
                                        customers.changeExpDate(userName, newDate);
                                    else
                                        cout << "Input is out of range... " << endl;

                                    continue;
                                }
                                else if (decision == "3")
                                {
                                    int newCode;
                                    cout << "Enter the new 3 digit security code: ";
                                    cin >> newCode;

                                    if(customers.checkSecurCode(newCode))
                                    {
                                        customers.changeSecurCode(userName, newCode);
                                    }
                                    else
                                        cout << "Input is out of range.. " << endl;

                                    continue;
                                }
                                else if (decision == "4")
                                {
                                    string newName;
                                    cout << "Enter the name on the card: ";
                                    getline(cin, newName);

                                    customers.changeCardName(userName, newName);

                                    continue;
                                }
                                else if (decision == "5")
                                {
                                    moneyLoop = false;
                                    continue;
                                }
                                else
                                    cout << "Invalid input..." << endl;
                            }



                        }
                        else if (choice == "4") // Return to previous screen
                        {
                            menuLoop = false;
                            continue;
                        }
                        else // Otherwise
                            cout << "Invalid input... " << endl;
                    }



                }
                else if (option2 == "5") {
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
    }
}
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

