//flugferd.h
#pragma once

#include <iostream>
#include <string>
#include "ferd.h"

class Flugferd : public Ferd {
    private:
        std::string stadur;
    public:
        Flugferd();
        Flugferd(int nr, int bokadir, int fjoldi, std::string stadur);
        std::string getStadur();
        void setStadur(std::string stadur);
        void prenta();
};