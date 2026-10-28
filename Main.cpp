
#include <iostream>
using namespace std;

int main() {
    cout << "================================\n";
    cout << "     C++ QUANT CALCULATOR\n";
    cout << "================================\n";

    double balance;

    cout << "Enter your account balance: ";
    cin >> balance;

    if (balance <= 0) {
        cout << "Balance must be greater than zero.\n";
        return 1;
    }

    double riskPercent;

    cout << "Enter risk percentage : ";
    cin >> riskPercent;

    if (riskPercent <= 0 || riskPercent > 100) {
        cout << "Enter a risk percentage above 0 and at most 100.\n";
        return 1;
    }

    double riskAmount = balance * riskPercent / 100;

    cout << "\n--- Risk Summary ---\n";
    cout << "Account balance: " << balance << '\n';
    cout << "Risk percentage: " << riskPercent << "%\n";
    cout << "Amount at risk: " << riskAmount << '\n';

    return 0;
}
