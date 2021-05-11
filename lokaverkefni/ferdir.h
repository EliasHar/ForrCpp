//ferdir.h
#pragma once

#include <string>
#include "ferdaNoda.h"

class Ferdir {
    private:
        Ferd** fylkid;
        FerdaNoda* head;
        FerdaNoda* tail;
    public:
        Ferdir();
        void skraFerd(Ferd* b);
        int finnaLausanIndex();
        void skraBat(int nr, int bokadir, int fjoldi, bool yfirbyggdur);
        void skraFlug(int nr, int bokadir, int fjoldi, std::string stadur);
        void skraHjol(int nr, int bokadir, int fjoldi, int timi);
        void afskraFerd(int nr);
        Ferd* finnaFerd(int nr);
        bool boka(int nr, int bokun);
        bool afboka(int nr, int afbokun); 
        void prenta();
        ~Ferdir();
};