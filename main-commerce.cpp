#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <sstream>
#include "ShoppingCart.h"
#include "OrderHistory.h"
using namespace std;
int main() {
    vector <Inventory> list;
    vector <ShoppingCart> item;
    ShoppingCart B;
    Inventory A;
    OrderHistory C;
    string name;
    string items2;
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
                        A.display(list);
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
                        A.display(list);
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
                        A.display(list);
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
                        A.display(list);
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
                        A.display(list);
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
                    C.AddOrdHistory(items2, item);
                    B.RemoveCartFromPerson(name);

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
