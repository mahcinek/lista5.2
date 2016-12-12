#include <iostream>
#include <complex>
#include "Arr.h"
#include "example.h"

using namespace std;
template <typename T>
T sum(T a [],int dl){

    T licz=a[0];
    for (int i=1;i<dl;i++)
        licz=licz+a[i];
    return licz;
};

int main() {

    int tab1 [3]={1,2,5} ;
    double tab2 [3]={2.0,3.0,4.2};
    float tab3[3]={6.0,0.5557,3.5};
    complex <double> tab4[2]={complex<double>(1.3,2.0),complex<double>(2.0,3.0)};
    example tab5 [3]={example(1,"Ada"),example(3," ma kota"),example(5," ! ")};


    cout<<sum<int>(tab1,3)<<endl;
    cout<<sum<double>(tab2,3)<<endl;
    cout<<sum<float>(tab3,3)<<endl;
    cout<<sum<complex<double>>(tab4,2)<<endl;
    cout<<sum<example>(tab5,3)<<endl;

}