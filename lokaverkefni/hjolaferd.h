//hjolaferd.h
#pragma once

#include <iostream>
#include "ferd.h"

class Hjolaferd : public Ferd {
    private:
        int timi;
    public:
        Hjolaferd();
        Hjolaferd(int nr, int bokadir, int fjoldi, int timi);
        int getTimi();
        void setTimi(int timi);
        void prenta();
};