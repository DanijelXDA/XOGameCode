#include "XO.hpp"

XO::XO(){
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            tabla[i][j] = PRAZNO;
        }
    }
    igrac = IGRAC_X;
}

int XO::getIgrac()const{
    return igrac;
}

void XO::odigrajPotez(int pozicija){

    if(pozicija >= 1 || pozicija <= 9){
        int traziPoziciju = 1;

        int i, j;
        for(i = 0; i < 3; ++i){
            for(j = 0; j < 3; ++j){
                if(traziPoziciju == pozicija){
                    if(tabla[i][j] == IGRAC_X || tabla[i][j] == IGRAC_Y){
                        cout << endl << "Izabrana pozicija je vec popunjena." << endl;
                    }else{
                        if(igrac == IGRAC_X){
                            tabla[i][j] = IGRAC_X;
                            igrac = IGRAC_Y;
                        }else{
                            tabla[i][j] = IGRAC_Y;
                            igrac = IGRAC_X;
                        }
                    }
                    i = KRAJ_IGRE;
                    break;
                }
                traziPoziciju++;
            }
        }

        cout << "Pobednik je: ";

        if( // POBEDNIK JE X
            (tabla[0][0] == 1 && tabla[0][1] == 1 && tabla[0][2] == 1)
            ||
            (tabla[0][0] == 1 && tabla[1][1] == 1 && tabla[2][2] == 1)
            ||
            (tabla[0][0] == 1 && tabla[1][0] == 1 && tabla[2][0] == 1)
            ||
            (tabla[0][1] == 1 && tabla[1][1] == 1 && tabla[2][1] == 1)
            ||
            (tabla[0][2] == 1 && tabla[1][2] == 1 && tabla[2][2] == 1)
            ||
            (tabla[1][0] == 1 && tabla[1][1] == 1 && tabla[1][2] == 1)
            ||
            (tabla[2][0] == 1 && tabla[1][1] == 1 && tabla[0][2] == 1)
            ||
            (tabla[2][0] == 1 && tabla[2][1] == 1 && tabla[2][2] == 1)
            ){
                cout << "IGRAC 1 - X (iks)\n\n" << endl;
                igrac = KRAJ_IGRE;
        }else if( // POBEDNIK JE O
            (tabla[0][0] == 2 && tabla[0][1] == 2 && tabla[0][2] == 2)
            ||
            (tabla[0][0] == 2 && tabla[1][1] == 2 && tabla[2][2] == 2)
            ||
            (tabla[0][0] == 2 && tabla[1][0] == 2 && tabla[2][0] == 2)
            ||
            (tabla[0][1] == 2 && tabla[1][1] == 2 && tabla[2][1] == 2)
            ||
            (tabla[0][2] == 2 && tabla[1][2] == 2 && tabla[2][2] == 2)
            ||
            (tabla[1][0] == 2 && tabla[1][1] == 2 && tabla[1][2] == 2)
            ||
            (tabla[2][0] == 2 && tabla[1][1] == 2 && tabla[0][2] == 2)
            ||
            (tabla[2][0] == 2 && tabla[2][1] == 2 && tabla[2][2] == 2)
            ){
                cout << "IGRAC 2 - O (oks)\n\n" << endl;
                igrac = KRAJ_IGRE;
            }else{
                cout << " Nema pobednika.\n\n" << endl;
            }
    }
}

void XO::prikaziTablu() const{
    for(int i = 0; i < 3; ++i){
        cout << "\t-------------\n\t";
        for(int j = 0; j < 3; ++j){
            cout << "| ";
            if(tabla[i][j] == PRAZNO){
                cout << " ";
            }else if(tabla[i][j] == IGRAC_X){
                cout << "X";
            }else if(tabla[i][j] == IGRAC_Y){
                cout << "O";
            }
            cout << " ";
        }
        cout << "|" << endl;
    }
    cout << "\t-------------\n\n";
}

bool XO::kraj() const{
    return igrac == KRAJ_IGRE;
}
