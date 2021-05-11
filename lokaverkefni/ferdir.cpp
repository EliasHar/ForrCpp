//ferdir.cpp
#include "ferdir.h"

Ferdir::Ferdir(){
    this->head = nullptr;
    this->tail = nullptr;
}
void Ferdir::skraFerd(Ferd* b){
    FerdaNoda* newNode = new FerdaNoda(b);
    if(!this->head){
        this->head = newNode;
    } else {
        if(this->head->ferdin > newNode->ferdin) {
            newNode->next = this->head;
            this->head = newNode;
        } else {
            FerdaNoda* current = this->head;
            FerdaNoda* prev = this->head;
            while(current && current->ferdin <= newNode->ferdin) {
                prev = current;
                current = current->next;
            }
            newNode->next = current;
            prev->next = newNode;
        }
    }
}
void Ferdir::skraBat(int nr, int bokadir, int fjoldi, bool yfirbyggdur){
    this->skraFerd(new Batsferd(nr, bokadir, fjoldi, yfirbyggdur));
}
void Ferdir::skraFlug(int nr, int bokadir, int fjoldi, std::string stadur){
    this->skraFerd(new Flugferd(nr, bokadir, fjoldi, stadur));
}
void Ferdir::skraHjol(int nr, int bokadir, int fjoldi, int timi){
    this->skraFerd(new Hjolaferd(nr, bokadir, fjoldi, timi));
}
void Ferdir::afskraFerd(int nr){
    if(this->head){
        if(this->head->ferdin->getNr() == nr) {
            Ferd* skila = this->head->ferdin;
            FerdaNoda* newHead = this->head->next;
            delete this->head;
            this->head = newHead;
        } else {
            FerdaNoda* current = this->head;
            FerdaNoda* prev = this->head;
            while(current && current->ferdin->getNr() != nr) {
                prev = current;
                current = current->next;
            }
            if(current) {
                Ferd* skila = current->ferdin;
                prev->next = current->next;
                delete current;
                delete skila; 
            }
        }
    }
}
Ferd* Ferdir::finnaFerd(int nr){
    FerdaNoda* current = this->head;
    while(current){
        if(current->ferdin->getNr() == nr){
            return current->ferdin;
        }
        current = current->next;
    }
    return nullptr;
}
bool Ferdir::breytaBokadir(int id, int bokanir){
    
}
void Ferdir::prenta(){
    FerdaNoda* current = this->head;
    while(current) {
        std::cout << current->ferdin << std::endl;
        current = current->next;
    }
}
Ferdir::~Ferdir(){

}