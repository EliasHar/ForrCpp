// batsferd.h
#pragma once

#include <iostream>
#include "ferd.h"

class Batsferd{
    private:
        int nr;
        int bokadir;
        int fjoldi;
        bool yfirbyggdur;
    public:
        Batsferd();
        Batsferd(int nr, int bokadir, int fjoldi, bool yfirbyggdur);
        bool getYfirbyggdur();
        void setYfirbyggdur(bool yfirbyggdur);
        void prenta();
};