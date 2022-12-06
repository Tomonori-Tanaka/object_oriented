#include "IdNo.h"

int IdNo::counter = 0;

IdNo::IdNo() {
    counter++;
    id_no = counter;
}

int IdNo::id() const {
    return id_no;
}

int IdNo::get_max_id() {
    return counter;
}