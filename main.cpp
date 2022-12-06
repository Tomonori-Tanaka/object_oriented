#include <iostream>
#include "Accounting.h"
#include "IdNo.h"

using std::cout, std::endl;

int main() {
    IdNo a;
    IdNo b;
    IdNo c[4];

    cout << "a id: " << a.id() << endl;
    cout << "b id: " << b.id() << endl;
    for (int i=0; i<4; i++) {
        std::cout << "c[" << i << "] id: " << c[i].id() << endl;
    }

    cout << IdNo::get_max_id() << endl;
    
    return 0;
}