// batsferd.cpp

#include "batsferd.h"

Batsferd::Batsferd(){
    this->yfirbyggdur = false;
}
Batsferd::Batsferd(int nr, int bokadir, int fjoldi, bool yfirbyggdur){
    this->yfirbyggdur = yfirbyggdur;
}
bool Batsferd::getYfirbyggdur(){
    return this->yfirbyggdur;
}
void Batsferd::setYfirbyggdur(bool yfirbyggdur){
    this->yfirbyggdur = yfirbyggdur;
}
void Batsferd::prenta(){
    std::cout << "Númer: " << this->getNr() << ", Fjöldi Bókaðir: " << this->getBokadir() 
    << ", Heildarfjöldi: " << this->getFjoldi() << ", Yfirbyggður: " << this->yfirbyggdur << std::endl;
}