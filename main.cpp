#include <iostream>
#include "XO.hpp"

using namespace std;

void meni() {
   int izbor;
    
    XO xo;
    
    do {
        cout << endl;
        cout << "1. prikazi tablu" << endl;
        cout << "2. odigraj potez" << endl;
        cout << "3. kraj rada programa" << endl;
        
        cout << "Izaberite operaciju: ";
        cin >> izbor;
        
        XO();
        
        switch(izbor){
            case 1: xo.prikaziTablu();
            break;
            
            case 2: xo.odigrajPotez();
            break;
            
            case 3: xo.kraj();
        }
        
    }while(izbor != 3);
    
    return;
}

int main(void)

{
    meni();
    
    return 0;
}
