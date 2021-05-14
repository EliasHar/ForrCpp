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
    if (bokadir >! this->fjoldi) {
        this->bokadir = bokadir;
    }
}
int Ferd::getFjoldi(){
    return this->fjoldi;
}
void Ferd::setFjoldi(int fjoldi){
    this->fjoldi = fjoldi;
}
bool Ferd::boka(int bokun) {
    if(bokun >= 0) {
        if(bokun + this->bokadir <= this->fjoldi) {
            this->bokadir += bokun;
            return true;
        }
        std::cout << "Þú getur ekki bókað fleiri en komast í ferðina!" << std::endl;
        return false;
    }
    std::cout << "Þú getur ekki bókað færri en 0 í ferðina!" << std::endl;
    return false;
}
bool Ferd::afboka(int afbokun) {
    if(afbokun >= 0) {
        if(afbokun <= this->bokadir) {
            this->bokadir -= afbokun;
            return true;
        }
        std::cout << "Þú getur ekki afbókað fleiri en eru bókaðir" << std::endl;
        return false;
    }
    std::cout << "Þú getur ekki afbókað færra en 0" << std::endl;
    return false;
}
bool Ferd::operator==(Ferd& other){
    return this->nr == other.getNr() &&
    this->fjoldi == other.getFjoldi() &&
    this->bokadir == other.getBokadir();
}
bool Ferd::operator!=(Ferd& other){
    return !(*this == other);
}
bool Ferd::operator<(Ferd& other){
    return this->nr < other.getNr();
}
bool Ferd::operator>(Ferd& other) {
    return other < *this;
}
bool Ferd::operator<=(Ferd& other){
    return !(*this > other);
}
bool Ferd::operator>=(Ferd& other){
    return !(*this < other);
}
std::ostream& operator<<(std::ostream& ostr, Ferd& b) {
    return ostr << "Numer: " << b.getNr() << ", Fjöldi: " << b.getFjoldi() << ", Heildarfjoldi: " << b.getBokadir();
}
