
#include <iostream>
using namespace std;

int main()
 {
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 50) {
        cout << "You are Pass." << endl;
    } else {
        cout << "You are Fail." << endl;
    }

    return 0;
}
