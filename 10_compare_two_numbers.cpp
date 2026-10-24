
#include <iostream>
using namespace std;

int main()
 {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (a == b) {
        cout << "Both numbers are equal." << endl;
    } else {
        cout << "Both numbers are not equal." << endl;
    }

    return 0;
}
