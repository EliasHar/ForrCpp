//flugferd.cpp

#include "flugferd.h"

Flugferd::Flugferd(){
    this->stadur = "";
}
Flugferd::Flugferd(int nr, int bokadir, int fjoldi, std::string stadur){
    this->stadur = stadur;
}
std::string Flugferd::getStadur(){
    return this->stadur;
}
void Flugferd::setStadur(std::string stadur){
    this->stadur = stadur;
}
void Flugferd::prenta(){
    std::cout << "Númer: " << this->getNr() << ", Fjöldi Bókaðir: " << this->getBokadir() 
    << ", Heildarfjöldi: " << this->getFjoldi() << ", Hvert: " << this->stadur << std::endl;
}