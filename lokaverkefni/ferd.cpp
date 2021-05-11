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
bool Ferd::boka(int bokun) {

}
bool Ferd::afboka(int bokun) {
    
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
    if(this->nr == other.getNr()) {
        return this->bokadir < other.getBokadir();
    }
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
    return ostr << 'Id: ' << b.getNr() << ", Fjöldi: " << b.getFjoldi() << ", Litur: " << b.getBokadir();
}
