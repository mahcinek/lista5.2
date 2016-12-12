//
// Created by pivekk on 06.12.2016.
//

#ifndef LISTA_5_TEMPCLASS_H
#define LISTA_5_TEMPCLASS_H




template <typename T,int i> // szablon klasy ma 2 parametry
class Arr// 1-szy typ T, 2-gi wartość typu int
{ // Wartością aktualną T może być dowolny typ
public: // Wartością aktualną i może być stały int
   /* Arr() {

    }*/

    Arr(T array[]): Tarray(array), arraysize(i) {
    }

    ~Arr(){
        delete Tarray;
    };

    T sum(){
        T licznik=Tarray[0];
        for (int j = 1; j < i; j++) {
            licznik+=Tarray[j];
        }
        return licznik;
    };

private:
    T* Tarray;
    int arraysize;
};
#endif //LISTA_5_TEMPCLASS_H
