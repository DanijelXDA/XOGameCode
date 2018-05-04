#include <iostream>
#include "XO.hpp"

using namespace std;
        
XO::XO(){
    
    for(int i1 = 0; i1 < 3; i1++)
       for(int i2 = 0; i2 < 3; i2++)
           tabla[i1][i2] = {' '};
    
    igrac = IGRAC_X;
}

void XO::prikaziTablu() const{
    
    XO xo;
    
   cout << "-------------------" << endl;
    cout << "|  " << xo.tabla[0][0] << "  | " << " " << "" << xo.tabla[0][1] << "  |" << " " << " " << xo.tabla[0][2] << "  |" << endl;
    
    cout << "-------------------" << endl;
    cout << "|  " << xo.tabla[1][0] << "  |" << " " << " " << xo.tabla[1][1] << "  |" << " " << " " << xo.tabla[1][2] << "  |" << endl;
    
    cout << "-------------------" << endl;
    cout << "|  " << xo.tabla[2][0] << "  |" << " " << " " << xo.tabla[2][1] << "  |" << " " << " " << xo.tabla[2][2] << "  |" << endl;
    cout << "-------------------" << endl;
    cout << endl;
    
}

void XO::odigrajPotez() const{
    
    XO iksOks;
    
    string ig;
    int polje;
    char pom;
    
    if(iksOks.igrac == IGRAC_X)
       ig = "X(iks)";
    else
       ig = "O(oks)";
    
    cout << endl;
    cout << "Na potezu je igrac " << ig << endl;
    cout << "Unesite poziciju za unos(1 do 9): " << endl << endl;
    
    cout << "-------------------" << endl;
    cout << "|  1" << " " << " | " << " " << "2  |" << " " << " 3  |" << endl;
    
    cout << "-------------------" << endl;
    cout << "|  4 " << " |" << " " << " 5  |" << " " << " 6  |" << endl;
    
    cout << "-------------------" << endl;
    cout << "|  7 "  << " |" << " " << " 8  |" << " " << " 9  |" << endl;
    cout << "-------------------" << endl;
    cout << endl;
    
    cout << "Izaberite polje: ";
    cin >> polje;
    
    if(iksOks.igrac == IGRAC_X)
       pom = 'X';
    else
       pom = 'O';
  
    switch(polje){
        case 1: iksOks.tabla[0][0] = pom;
        break;
       
        case 2: iksOks.tabla[0][1] = pom;
        break;
        
        case 3: iksOks.tabla[0][2] = pom;
        break;
        
        case 4: iksOks.tabla[1][0] = pom;
        break;
        
        case 5: iksOks.tabla[1][1] = pom;
        break;
       
        case 6: iksOks.tabla[1][2] = pom;
        break;
           
        case 7: iksOks.tabla[2][0] = pom;
        break;
    
        case 8: iksOks.tabla[2][1] = pom;
        break;
        
        case 9: iksOks.tabla[2][2] = pom;
        break;
  }
        ++iksOks.igrac;
}

bool XO::kraj() const{
    if(igrac == KRAJ_IGRE)
      return true;
    else
      return false;

}
