#include"INVENTORY.h"
#include "shoppingcart.h"
int main(){

while (1) {
        string option;
        // displays menu
        cout << "Menu: " << endl;
        cout << "0. Exit" << endl;
        cout << "1. Login" << endl;
        cout << "2. Create Account" << endl;
        cout << "3. Forgot Password" << endl
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
		while(1){
        // displays menu
        cout << "Menu: " << endl;
        cout << "1. View Cart" << endl;
        cout << "2. View Inventory" << endl;
        cout << "3. Checkout" << endl;
        cout << "4. Edit Account" << endl
	cout << "5. View Order History" << endl;
	out << "6. Logout" << endl;
	cout << "7. Delete Account"<< endl;
        cout << "Enter choice: ";
        cin >> option2;
	if (option == "1") {
        cout << "1. View Items" << endl;
        cout << "2. Checkout" << endl;
        cout << "3. Delete Item" << endl;
        cout << "4. Go Back" << endl
        }
	
        cout << endl;
		}
  

        } 
		else if (option == "2") {
          

        } 
		else if (option == "3") {
    
		}
        else {
            // if they give an invalid option display error message and ask for another option
            cout << "Invalid Choice! Choose again." << endl;
            continue;
        }
        return 0;
    }
