#pragma once



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
        void prenta();
        ~Ferd();
};