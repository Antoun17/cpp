#include <iostream>
using namespace std;

int main() {

    int number;
    int x = 0;
    int nnumber = 0;

    cout << "Enter an integer: ";
    cin >> number;

    x = number;

    if (number >= 1) {


        if (number < 10) {
        } else {
            cout << "number is too big only values between 1 and 10";
            return 0;
        }

        x = x - 1;
        nnumber = x;

        nnumber = nnumber - 1;

        cout << nnumber;
        cout << ",";
        cout << x;

        return 0;


    }


}