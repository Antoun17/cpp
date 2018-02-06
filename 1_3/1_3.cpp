#include <iostream>

using namespace std;

int main () {

    float p;
    int x;

    for (p = 1, x = 1; x < 10;) {
        p = p * x;
        x = x + 1;
    }
    return 0;
}

