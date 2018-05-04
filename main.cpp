#include "XO.hpp"

int potezi(int igrac){
    if(igrac == IGRAC_X){
        cout << "Na potezu je igrac X (iks)" << endl;
    }else{          // O
        cout << "Na potezu je igrac O (oks)" << endl;
    }
    cout << "Izaberite poziciju (dozvoljene vrednosti 1-9): " << endl;
    cout << "\t-------------" << endl;
    cout << "\t| 1 | 2 | 3 |" << endl;
    cout << "\t-------------" << endl;
    cout << "\t| 4 | 5 | 6 |" << endl;
    cout << "\t-------------" << endl;
    cout << "\t| 7 | 8 | 9 |" << endl;
    cout << "\t-------------" << endl << endl;
    cout << "> ";

    int pozicija;
    cin >> pozicija;

    if(pozicija < 1 || pozicija > 9){
        cout << "Izabrana pozicija ne postoji" << endl;
    }

    return pozicija;
}

int meni(){
    cout << "1. prikazi tablu" << endl;
    cout << "2. odigraj potez" << endl;
    cout << "3. kraj rada programa" << endl;
    cout << "Izaberite operaciju: ";
    int i;
    cin >> i;
    if(i < 1 || i > 3){
        cout << "Izabrana operacija ne postoji" << endl << endl;
    }
    return i;
}

int main(){

    XO partija;
    int operacija = 0;

    while(operacija != 3 && !partija.kraj()){
        operacija = meni();
        switch(operacija){
            case 1: // prikazivanje tabele
                partija.prikaziTablu();
                break;
            case 2: // povlacenje poteza
                partija.odigrajPotez( potezi(partija.getIgrac()) );
                break;
            case 3: // kraj rada programa
                cout << "Kraj programa..." << endl;
                break;
        }
    }

    return 0;
}
