#pragma once
#include "ferd.h"
#include "batsferd.h"
#include "flugferd.h"
#include "hjolaferd.h"

struct FerdaNoda {
    Ferd* ferdin;
    FerdaNoda* next;
    FerdaNoda(Ferd* b) {
        this->ferdin = b;
        this->next = nullptr;
    }
};