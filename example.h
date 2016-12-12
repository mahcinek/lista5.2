//
// Created by pivekk on 06.12.2016.
//

#ifndef LISTA_5_2_EXAMPLE_H
#define LISTA_5_2_EXAMPLE_H

#include <string>
using namespace std;


class example {
public:
    string to_string()const;
    example (int c,string d);
    example operator + (const example &other);
    example operator = (const example &other);
    friend std::ostream& operator<< (std::ostream& stream, const example& matrix) {

        stream<<matrix.to_string();
        return stream;
    }

private:
    int a;
    string b;

};


#endif //LISTA_5_2_EXAMPLE_H
