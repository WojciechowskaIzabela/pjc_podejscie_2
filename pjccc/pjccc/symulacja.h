#ifndef SYMULACJA_H
#define SYMULACJA_H
#include "tura.h"

using namespace std;

class CSymulacja{
    int przerwanie_symulacji;
    CTura turka;

public:

    CSymulacja();
    void przeprowadz_symulacje();
    void stop_symulacji();
};

#endif // SYMULACJA_H
