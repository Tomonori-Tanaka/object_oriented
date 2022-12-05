#include <iostream>
#include "Accounting.h"
//#include "Date.h"

using std::cout, std::endl;

int main() {
    Accounting nakano("Nakano Hayato", 1000, Date(2125, 1, 24));
    Accounting yamada("Yamada Hirohumi", 200, Date(2123, 7, 15));

    nakano.spend(200);
    yamada.earn(100);

    cout << nakano.name() << endl;
    cout << nakano.asset() << "yen" << endl;
    cout << nakano.birthday().year() << "nenn"
        << nakano.birthday().month() << "gatsu"
        << nakano.birthday().day() << "nichi" << endl;

    
    return 0;
}