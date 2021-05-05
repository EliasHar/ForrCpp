//ferdir.cpp
#include "ferdir.h"

Ferdir::Ferdir(){
    this->head = nullptr;
    this->tail = nullptr;
}
void Ferdir::skraFerd(Ferd* b){
    FerdaNoda* newNode = new FerdaNoda(b);
    if(this->head) {
        this->head = newNode;
        this->tail = newNode;
    } else {
        this->tail->next = newNode;
        this->tail = newNode;
    }
}
void Ferdir::skraBat(int nr, int bokadir, int fjoldi, bool yfirbyggdur){
    this->skraFerd(Batsferd(nr, bokadir, fjoldi, yfirbyggdur));
}
void Ferdir::skraFlug(int nr, int bokadir, int fjoldi, std::string stadur){
    this->skraFerd(Flugferd(nr, bokadir, fjoldi, stadur));
}
void Ferdir::skraHjol(int nr, int bokadir, int fjoldi, int timi){
    this->skraFerd(Hjolaferd(nr, bokadir, fjoldi, timi));
}
void Ferdir::afskraFerd(){

}
void Ferdir::finnaFerd(int nr){

}
void Ferdir::breytaBokadir(){

}
void Ferdir::prenta(){

}
Ferdir::~Ferdir(){

}