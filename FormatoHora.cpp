//
// Created by Vanessa Paola Alvarado on 26/02/18.
//

#include "FormatoHora.h"
FormatoHora::FormatoHora(int h, int m, int s) {
    this->h=h;
    this->m=m;
    this->s=s;
}
FormatoHora operator + (const FormatoHora &p1, const FormatoHora &p2) {
    int resultadoA;
    int resultadoB;
    int resultadoC;

    resultadoA = p1.h + p2.h;
    resultadoB = p1.m + p2.m;
    resultadoC = p1.s + p2.s;


    if (resultadoC > 60) {
        resultadoB++;
        resultadoC = resultadoC - 60;
    } else {
        resultadoC;
    }
    if (resultadoB > 60) {
        resultadoA++;
        resultadoB = resultadoB - 60;
    } else {
        resultadoB;
    }
    FormatoHora resultado(resultadoA, resultadoB, resultadoC);
    return resultado;
}



FormatoHora operator - (const FormatoHora &p1, const FormatoHora &p2){

    int resultadoA;
    int resultadoB;
    int resultadoC;

    resultadoA = p1.h + p2.h;
    resultadoB = p1.m + p2.m;
    resultadoC = p1.s + p2.s;


    if (resultadoC >= 60) {
        resultadoB++;
        resultadoC = resultadoC - 60;
    } else {
        resultadoC;
    }
    if (resultadoB >= 60) {
        resultadoA++;
        resultadoB = resultadoB - 60;
    } else {
        resultadoB;
    }
    FormatoHora resultado (p1.h - p2.h, p1.m-p2.m, p1.s - p2.s);
    return resultado;

    }






