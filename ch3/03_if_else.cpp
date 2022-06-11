#include <iostream>

using namespace std;

int main()
{
    long number {};
    cout << "Enter a small integer: " << endl;
    cin >> number;
    if (number % 2) {
        cout << "\nNumber is odd" << endl;
    } else {
        // no remainder
        cout << "Number is even! " << endl;
    }
}
