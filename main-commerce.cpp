#include "ShoppingCart.h"
#include "INVENTORY.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
# include <sstream>
#include <cstdlib>
using namespace std;

using namespace std;
int main() {
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
                if(option2=="0"){
                    break;
                }
                if(option2 =="1"){
                    displayCart();
                    continue;
                }
                if(option2=="2"){
                  cout<< "Display Options"<<endl;
                  cout << "1. View All " << endl;
                  cout << "2. View by Genre " << endl;
                  cout << "3. View by Director" << endl;
                  cout << "4. View Low to High " << endl;
                  cout << "5. View High to Low " << endl;
                  cout << "6.  Search By Name " << endl;
                  cout << "7.  Search By Genre " << endl;
                  cout << "8.  Search By Director " << endl;

                  if(option == "1") {
                      string addOption;
                      viewAllInventory(list);
                      display(list);
                      cout << "Do you want to add an item? Y or N" << endl;
                      cin >> addOption;
                      if (addOption == "Y" or addOption == "y") {
                          int InventoryOption;
                          addToCart(list, items);
                      } else {
                          break;
                      }
                      if (option == "2") {
                          string addOption;
                          viewByGenre(list);
                          display(list);
                          cout << "Do you want to add an item? Y or N" << endl;
                          cin >> addOption;
                          if (addOption == "Y" or addOption == "y") {
                              int InventoryOption;
                              addToCart(list, items);
                          } else {
                              break;
                          }
                      }
                      if (option == "3") {
                          string addOption;
                          viewByDirector(list);
                          display(list);
                          cout << "Do you want to add an item? Y or N" << endl;
                          cin >> addOption;
                          if (addOption == "Y" or addOption == "y") {
                              int InventoryOption;
                              addToCart(list, items);
                          } else {
                              break;
                          }

                      }
                      if (option == "4") {
                          string addOption;
                          viewLowtoHigh(list);
                          display(list);
                          cout << "Do you want to add an item? Y or N" << endl;
                          cin >> addOption;
                          if (addOption == "Y" or addOption == "y") {
                              int InventoryOption;
                              addToCart(list, items);
                          } else {
                              break;
                          }
                      }
                      if (option == "5") {
                          string addOption;
                          viewHightoLow(list);
                          display(list);
                          cout << "Do you want to add an item? Y or N" << endl;
                          cin >> addOption;
                          if (addOption == "Y" or addOption == "y") {
                              int InventoryOption;
                              addToCart(list, items);
                          } else {
                              break;
                          }

                      }
                      if (option == "6"){
                      cout <<"not finished yet;"  << endl;
                      }
                      if (option == "7"){
                          cout <<"not finished yet;"  << endl;
                      }
                      if (option == "8"){
                          cout <<"not finished yet;"  << endl;
                      }
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
        };
    }
