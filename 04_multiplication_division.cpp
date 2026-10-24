
#include <iostream>
using namespace std;

int main()
 {
    double a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Multiplication: " << a * b << endl;

    if (b != 0) {
        cout << "Division: " << a / b << endl;
    } else {
        cout << "Division is not possible by zero." << endl;
    }

    return 0;
}
