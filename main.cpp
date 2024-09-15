#include <stdioh>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main() {

    int role;
    do {
        cout << "\n=== Bank system ===\n";
        cout << "1. Login as a user\n";
        cout << "2. Login as administrator\n";
        cout << "3. Exit\n";
        cout << "Choose a role: ";
        cin >> role;

        switch (role) {
            case 1:
                //userInterface(manager);  // User
                break;
            case 2:
                //adminInterface(manager);  // Admin
                break;
            case 3:
                cout << "Closing program." << endl;
                break;
            default:
                cout << "Wrong option." << endl;
        }
    } while (role != 3);

    return 0;
}

