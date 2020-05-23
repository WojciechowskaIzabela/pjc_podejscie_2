#include <iostream>
#include "symulacja.h"

using namespace std;

CSymulacja::CSymulacja (){
    cout<<"Zaczynamy!"<<endl;
}


void CSymulacja::przeprowadz_symulacje(){

    przerwanie_symulacji=0;

    while(przerwanie_symulacji==0){

    turka.przeprowadz_ture();
    stop_symulacji();

}

}
void CSymulacja::stop_symulacji(){

    cout<<endl<<"Czy chcesz zakonczyc symulacje??? 1-Tak, 0-Nie"<<endl;

    cin>>przerwanie_symulacji;

    if(przerwanie_symulacji!=1 || przerwanie_symulacji!=0){
        while (przerwanie_symulacji!=1 || przerwanie_symulacji!=0)
            cout<< "Podaj liczę 1 lub 0 !!!"<<endl;
        cin>>przerwanie_symulacji;
    }

    if(przerwanie_symulacji==1){
      turka.~CTura();
    }

    }

