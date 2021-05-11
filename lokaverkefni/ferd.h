#pragma once

#include <iostream>

class Ferd{
    private:
        int nr;
        int bokadir;
        int fjoldi;
    public:
        Ferd();
        Ferd(int nr, int bokadir, int fjoldi);
        int getNr();
        void setNr(int nr);
        int getBokadir();
        void setBokadir(int bokadir);
        int getFjoldi();
        void setFjoldi(int fjoldi);
        bool boka(int bokun);
        bool afboka(int afbokun);
        virtual void prenta() = 0;
        virtual ~Ferd() {}
        bool operator==(Ferd& other);
        bool operator!=(Ferd& other);
        bool operator<(Ferd& other);
        bool operator>(Ferd& other);
        bool operator<=(Ferd& other);
        bool operator>=(Ferd& other);
};
std::ostream& operator<<(std::ostream& ostr, Ferd& b);