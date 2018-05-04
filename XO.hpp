#ifndef _XO_INCLUDED_HPP
#define _XO_INCLUDED_HPP

#define PRAZNO 0
#define IGRAC_X 1
#define IGRAC_Y 2
#define KRAJ_IGRE 3

class XO {
    private:
       int tabla[3][3];
       int igrac;
    public:
       XO();
       void odigrajPotez() const;
       void prikaziTablu() const;
       bool kraj()const;
};

#endif
