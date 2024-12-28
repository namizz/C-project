#include <iostream>
using namespace std;

void registration() {
    cout << "Registration process started...\n";
    // Add your registration code here
}

void view() {
    cout << "Viewing all records...\n";
    // Add your view code here
}

void search() {
    cout << "Search functionality...\n";
    // Add your search code here
}

void update() {
    cout << "Update process started...\n";
    // Add your update code here
}

void deleteRecord() {
    cout << "Delete functionality...\n";
    // Add your delete code here
}

int main() {
    int choice, subChoice;
    
    cout << "Welcome to HU Daycare\n";
    cout << "Press 1 to continue\n";
    cout << "Press 0 to exit\n";
    cin >> choice;

    if (choice == 1) {
        do {
            cout << "\nMenu:\n";
            cout << "1. Registration\n";
            cout << "2. View\n";
            cout << "3. Search\n";
            cout << "4. Update\n";
            cout << "5. Delete\n";
            cout << "6. Exit\n";
            cout << "Enter your choice: ";
            cin >> subChoice;

            switch (subChoice) {
                case 1:
                    registration();
                    break;
                case 2:
                    view();
                    break;
                case 3:
                    search();
                    break;
                case 4:
                    update();
                    break;
                case 5:
                    deleteRecord();
                    break;
                case 6:
                    cout << "Exiting program...\n";
                    break;
                default:
                    cout << "Invalid choice. Please try again.\n";
            }
        } while (subChoice != 6);
    } else {
        cout << "Program exited.\n";
    }

    return 0;
}
