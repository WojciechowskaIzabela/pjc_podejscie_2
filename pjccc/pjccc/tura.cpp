#include <iostream>
#include "tura.h"

using namespace std;

CTura ::CTura ()
{
    wczytaj_rozmiar_planszy();
    CZwierze ***tablica=new CZwierze** [rozmiar];
    for(int i=0; i<rozmiar;i++)
        tablica[i]= new CZwierze *[rozmiar];

    for(int i=0;i<rozmiar;i++)
        for(int j=0;j<rozmiar;j++)
            tablica[i][j]=NULL;
}


CTura::~CTura(){
    for(int i=0;i<rozmiar;i++)
        delete [ ] tablica [i];
    delete [ ] tablica;
    cout<<"Do widzenia!!!"<<endl;
}


void CTura::wczytaj_rozmiar_planszy(){

    cout<<endl<<" Podaj rozmiar tablicy z przedzialu <5,30>" <<endl;
    cin>>rozmiar;
    if(rozmiar<5 || rozmiar>30)
    {
        while(rozmiar<5 || rozmiar>30)
        {
            cout<<endl<<" Podaj wartosc z przedzialu <5,30> ! "<<endl;
            cin>>rozmiar;
        }
    }
}

void CTura::przeprowadz_ture(){
    drukuj_tablice();
}

void CTura::drukuj_tablice(){
    for(int i=0;i<rozmiar;i++)
        for(int j=0;j<rozmiar;j++)
            if( tablica[i][j]==NULL)
                cout<<"__";
}

void CTura::zwierzeta_startowe(){

}
