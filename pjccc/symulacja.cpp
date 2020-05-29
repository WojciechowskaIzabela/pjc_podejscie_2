#include <iostream>
#include "symulacja.h"

using namespace std;

CSymulacja :: CSymulacja (){
    cout<<"Zaczynajmy!"<<endl<<endl;
}


void CSymulacja::przeprowadz_symulacje(){

    przerwanie_symulacji=0;
     turka.tura_obecna=1;

    while(przerwanie_symulacji==0){


    turka.przeprowadz_ture();

    stop_symulacji();
    int g;
    g=uz.czy_dodac_zwierze();
    if(g==1)
        turka.dodaj_zwierze();

}

}
void CSymulacja :: stop_symulacji(){

   przerwanie_symulacji = uz.czy_przerwac_symulacje();

    if(przerwanie_symulacji==1){

       turka.~CTura();
       cout<<"Do zobaczenia!!!"<<endl;
    }

    }

