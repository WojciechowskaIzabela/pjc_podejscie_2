#ifndef TURA_H
#define TURA_H
#include "zwierze.h"

using namespace std;

class CZwierze;

class CTura{
    CZwierze ***tablica;
    int rozmiar;

public:
    CTura();
    ~CTura();

    void drukuj_tablice();
    void przeprowadz_ture();
    void zwierzeta_startowe();
    void wczytaj_rozmiar_planszy();

};

#endif // TURA_H
