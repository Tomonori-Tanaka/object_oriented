#include <iostream>
#include <string>
#include "Boolean.h"

using std::cout, std::cin, std::endl;

Boolean int_eq(int x, int y) {
    return x == y;
}

int main() {
    int n;
    Boolean a;
    Boolean b = a;
    Boolean c(100);
    Boolean x[8];

    cout << "integer: ";
    cin >> n;
    x[0] = int_eq(n, 5);        // x[0]
    x[1] = (n != 3);            // x[1]
    x[2] = Boolean::False;      // x[2]
    x[3] = 1000;                // x[3]
    x[4] = c == Boolean::True;  // x[4]

    cout << "value of a: " << int(a) << endl;
    cout << "value of b: " << static_cast<const char*>(b) << endl;

    for (int i = 0; i < 8; ++i) {
        cout << "x[" << i << "] = " << x[i] << endl;
    }
    
    return 0;
}