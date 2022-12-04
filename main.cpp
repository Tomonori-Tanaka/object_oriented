#include <iostream>

#include "Date.h"

using std::cout, std::endl;

int main() {
    const Date birthday(1992, 11, 18);
    cout << birthday.day_of_week() << endl;
    cout << birthday.to_string() << endl;
    const Date today;
    cout << today.to_string() << endl;
    
    return 0;
}