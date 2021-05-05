// ferd.cpp
#include "ferd.h"

Ferd::Ferd(){
    this->nr = 0;
    this->bokadir = 0;
    this->fjoldi = 0;
}
Ferd::Ferd(int nr, int bokadir, int fjoldi){
    this->nr = nr;
    this->bokadir = bokadir;
    this->fjoldi = fjoldi;
}
int Ferd::getNr(){
    return this->nr;
}
void Ferd::setNr(int nr){
    this->nr = nr;
}
int Ferd::getBokadir(){
    return this->bokadir;
}
void Ferd::setBokadir(int bokadir){
    this->bokadir = bokadir;
}
int Ferd::getFjoldi(){
    return this->fjoldi;
}
void Ferd::setFjoldi(int fjoldi){
    this->fjoldi = fjoldi;
}

