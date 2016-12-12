//
// Created by pivekk on 06.12.2016.
//

#include "example.h"

string example::to_string()const {
    return "("+std::to_string(a)+"," + b +")";
}

example example::operator+(const example &other) {
    return example (a+other.a,b+other.b);
}

example::example(int c, string d):a(c),b(d) {

}

example example::operator=(const example &other) {
    a=other.a;
    b=other.b;
    return *this;
}


