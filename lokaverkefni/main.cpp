#include <iostream>
#include <string>
#include <sstream>
#include "ferdir.h"

using namespace std;
int main() {
    Ferdir f;
    f.skraFlug(900, 10, 50, "Akureyri");
    f.skraFlug(902, 3, 10, "Grímsey");
    f.skraBat(907, 2, 10, false);
    f.skraFlug(901, 120, 200, "Tenerife");
    f.skraFlug(903, 50, 250, "Boston");
    f.skraHjol(904, 3, 10, 4);
    f.skraHjol(905, 0, 20, 10);
    f.skraHjol(906, 3, 5, 1);
    f.skraBat(908, 20, 100, true);
    f.skraBat(909, 6, 8, false);
    string inntak, skipun, tegund, stadur;
    int id, bokadir, fjoldi, timi, annad;
    bool yfirbyggdur;
    do {
        cout << "Sláðu inn skipun: ";
        getline(cin, inntak);
        stringstream ss;
        ss << inntak;
        ss >> skipun;
        if(skipun == "skrá"){
            ss >> tegund;
            if(tegund == "flug") {
                ss >> id >> bokadir >> fjoldi >> stadur;
                f.skraFlug(id, bokadir, fjoldi, stadur);
            }else if(tegund == "bátur") {
                ss >> id >> bokadir >> fjoldi >> yfirbyggdur;
                f.skraBat(id, bokadir, fjoldi, yfirbyggdur);
            }else if(tegund == "hjól") {
                ss >> id >> bokadir >> fjoldi >> timi;
                f.skraHjol(id, bokadir, fjoldi, timi);
            } else {
                cout << "Skil ekki" << endl;
            }
        } else if (skipun == "prenta") {
            f.prenta();
        } else if (skipun == "afskrá") {
            ss >> id;
            f.afskraFerd(id);
        } else if (skipun == "finna") {
            ss >> id;
            f.finnaFerd(id)->prenta();
        } else if (skipun == "bóka") {
            ss >> id >> annad;
            f.boka(id, annad);
        } else if (skipun == "afbóka") {
            ss >> id >> annad;
            f.afboka(id, annad);
        } else if (skipun != "hætta") {
            cout << "Skil ekki skipun" << endl;
        }
    } while (skipun != "hætta");
    return 0;
};