#include <iostream>
using namespace std;

int main () {
    int number;
    cout << "Enter a number between 1 and 5: ";
    cin >> number;

    switch (number) {
        case 1:
            cout << "One." << endl;
            break;
        case 2:
            cout << "Two." << endl;
            break;
        case 3:
            cout << "Three." << endl;
            break;
        case 4:
            cout << "Four." << endl;
            break;
        case 5:
            cout << "Five." << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 5." << endl;
    }

    return 0;
}