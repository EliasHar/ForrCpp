#include <iostream>
#include <string>
#include <sstream>
#include "ferdir.h"
int main() {
    /*
    Flugferd(900, 10, 50, "Akureyri");
    Flugferd(901, 120, 200, "Tenerife");
    Flugferd(902, 3, 10, "Grímsey");
    Flugferd(903, 50, 250, "Boston");
    Hjolaferd(904, 3, 10, 4);
    Hjolaferd(905, 0, 20, 10);
    Hjolaferd(906, 3, 5, 1);
    Batsferd(907, 2, 10, false);
    Batsferd(908, 20, 100, true);
    Batsferd(909, 6, 8, false);
    */
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
    f.prenta();
    return 0;
};