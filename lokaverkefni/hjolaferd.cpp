//hjolaferd.cpp

#include "hjolaferd.h"

Hjolaferd::Hjolaferd(){
    this->timi = 0;
}
Hjolaferd::Hjolaferd(int nr, int bokadir, int fjoldi, int timi){
    this->timi = timi;
}
int Hjolaferd::getTimi(){
    return this->timi;
}
void Hjolaferd::setTimi(int timi){
    this->timi = timi;
}
void Hjolaferd::prenta(){
    std::cout << "Númer: " << this->getNr() << ", Fjöldi Bókaðir: " << this->getBokadir() 
    << ", Heildarfjöldi: " << this->getFjoldi() << ", Tími: " << this->timi << std::endl;
}