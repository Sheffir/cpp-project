#include <iostream>
using namespace std;

int main() {
    double hours, rate, grossPay, tax, netPay;

    cout << "Enter hours worked: ";
    cin >> hours;
    cout << "Enter hourly wage: ";
    cin >> rate;

    // Gross pay calculation
    if (hours > 40)
        grossPay = 40 * rate + (hours - 40) * (1.5 * rate);
    else
        grossPay = hours * rate;

    // Tax calculation
    if (grossPay <= 600)
        tax = 0.15 * grossPay;
    else
        tax = 0.15 * 600 + 0.20 * (grossPay - 600);

    netPay = grossPay - tax;

    cout << "Gross Pay: " << grossPay << endl;
    cout << "Tax: " << tax << endl;
    cout << "Net Pay: " << netPay << endl;

    return 0;
}
