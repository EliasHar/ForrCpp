# ForrCpp

# Skýrsla
Í fyrstu vikunni setti ég aðalega bara upp basics fyrir verkefnið fyrir hlutaskilin. ég gleymdi að pusha committið fyrir hlutaskilin en þú ættir að geta séð það í commit [7251520](https://github.com/EliasHar/ForrCpp/commit/72515206585b291f992e2a0f1656edf91152f059)  
Í seinni vikunni var ég að klára lista klasann og að laga villur og klára skil.  
[Dagbók](dagbok.md)  
Ég gerði linked list  

## Aukakröfur 
Listinn er raðaður  
Lennti í stórum vanda með operator overloading sem tók 2 daga að laga.

## Prófunargögn
```cpp
f.skraFlug(900, 10, 50, "Akureyri");
f.skraFlug(902, 3, 10, "Grímsey");
f.skraBat(907, 2, 10, false);
f.skraFlug(901, 120, 200, "Tenerife");
f.skraFlug(903, 50, 250, "Boston");
f.skraHjol(904, 3, 10, 4);
f.skraHjol(905, 0, 20, 10);
f.skraHjol(906, 3, 5, 1);
f.skraBat(908, 20, 100, true);
f.skraBat(909, 6, 8, false);
```

## Leiðbeiningar fyrir viðmót
* Fyrst þarf að láta hvaða skipun maður vill nota
    * skrá - bætir við listann - skrá þarf hvaða tegund af ferð og upplýsingar sem sú ferð þarf
        * skrá flug 910 40 120 Danmörk
    * prenta - prentar allan listann - þarf ekkert meira inntak
    * afskrá - tekur ferð úr lista - þarf id á ferðinni sem á að taka út
        * afskrá 909
    * finna - prentar ferð - þarf id á lista
        * finna 908
    * bóka - bókar farþega í ferð - þarf id og fjölda sem á að bóka
        * bóka 905 10
    * afbóka - afbókar farþega úr ferð - þarf id og fjölda sem á að afbóka
        * afbóka 905 4
    * hætta - endar forritið

## Myndband
[Hlekkur á myndband](https://youtu.be/P4FMJEXpYz4)