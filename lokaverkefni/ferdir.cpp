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
        if(*this->head->ferdin > *newNode->ferdin) {
            newNode->next = this->head;
            this->head = newNode;
        } else {
            FerdaNoda* current = this->head;
            FerdaNoda* prev = this->head;
            std::cout << "-----------------------------------------------------" << std::endl;
            while(current && *current->ferdin <= *newNode->ferdin) {
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
bool Ferdir::boka(int nr, int bokun) {
    Ferd* ferdin = this->finnaFerd(nr);
    if (ferdin) {
        return ferdin->boka(bokun);
    }
    return false;
}
bool Ferdir::afboka(int nr, int afbokun) {
    Ferd* ferdin = this->finnaFerd(nr);
    if (ferdin) {
        return ferdin->afboka(afbokun);
    }
    return false;
}
void Ferdir::prenta(){
    FerdaNoda* current = this->head;
    while(current) {
        //std::cout << current->ferdin << std::endl;//
        current->ferdin->prenta();
        current = current->next;
    }
}
Ferdir::~Ferdir(){
    FerdaNoda* newHead = nullptr;
    while(this->head) {
        newHead = this->head->next;
        delete this->head;
        this->head = newHead;
    }
}