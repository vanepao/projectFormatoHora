#include <iostream>
#include "FormatoHora.h"

int main() {

    FormatoHora punto1 (4,02,03);
    FormatoHora punto2 (20,40,04);

    FormatoHora punto3= punto1+punto2;
    FormatoHora punto4= punto2-punto1;

    std::cout<<punto3.h<<":"<<punto3.m<<":"<<punto3.s<<"\n";
    std::cout<<punto4.h<<":"<<punto4.m<<":"<<punto4.s<<"\n";
}