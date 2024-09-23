#include <iostream>
using namespace std;

// will access values from coins.cpp via EXTERN statements
extern int quarter;
extern int dime;
extern int nickel;
extern int penny;

int main() {
    int purchase;
    int change;

    cout << "Enter the purchase amount in pennies (<= 100): ";
    cin >> purchase;

    // The change from a dollar
    change = 100 - purchase;

    // The number of quarters
    int num_quarters = change / quarter;
    change %= quarter;

    // The number of dimes
    int num_dimes = change / dime;
    change %= dime;

    // The number of nickels
    int num_nickels = change / nickel;
    change %= nickel;

    // Remaining change
    int num_pennies = change;

    // Display the change in coins
    cout << "Your change is: " << endl;
    cout << "Quarters: " << num_quarters << endl;
    cout << "Dimes: " << num_dimes << endl;
    cout << "Nickels: " << num_nickels << endl;
    cout << "Pennies: " << num_pennies << endl;

    return 0;
}

