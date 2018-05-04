#ifndef XO_HPP_INCLUDED
#define XO_HPP_INCLUDED

#include <iostream>
using namespace std;

#define PRAZNO 0
#define IGRAC_X 1
#define IGRAC_Y 2
#define KRAJ_IGRE 3

class XO{
    private:
        int tabla[3][3];
        int igrac;
    public:
        XO();
        int getIgrac() const;
        void odigrajPotez(int);
        void prikaziTablu() const;
        bool kraj() const;
};

#endif // XO_HPP_INCLUDED
