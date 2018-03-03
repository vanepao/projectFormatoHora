//
// Created by Vanessa Paola Alvarado on 26/02/18.
//

#include "FormatoHora.h"
FormatoHora::FormatoHora() {

}
FormatoHora::FormatoHora(int h, int m, int s) {
    this->h=h;
    this->m=m;
    this->s=s;
}

//OPERADOR DE SUMA
FormatoHora operator + (const FormatoHora &p1, const FormatoHora &p2) {
    int resultadoA, resultadoB, resultadoC;
    resultadoA = p1.h + p2.h;
    resultadoB = p1.m + p2.m;
    resultadoC = p1.s + p2.s;

    FormatoHora HR (resultadoA, resultadoB, resultadoC);
    HR= *new FormatoHora(resultadoA,resultadoB,resultadoC);
    HR.validar();

return HR; }


    //OPERADOR DE RESTA
    FormatoHora operator - (const FormatoHora &p1, const FormatoHora &p2) {
        int resultadoA, resultadoB, resultadoC;

        //OPERACIONES
        resultadoA = p1.h - p2.h;
        resultadoB = p1.m - p2.m;
        resultadoC = p1.s - p2.s;
        FormatoHora HR (resultadoA, resultadoB, resultadoC);
         HR = *new FormatoHora(resultadoA, resultadoB, resultadoC);
        HR.validar();
        return HR;
    }
//RETURN VALIDAR(HR)

void FormatoHora::validar() {

    if (s >= 60) {
        m++;
        s = s - 60;
    }
    if (m >= 60) {
        h++;
        m = m - 60;
    }
}





