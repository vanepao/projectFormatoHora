//
// Created by Vanessa Paola Alvarado on 26/02/18.
//

#ifndef POO_VALVARADO_A05_FORMATOHORA_H
#define POO_VALVARADO_A05_FORMATOHORA_H

#include <iostream>

class FormatoHora {
//Atributos de la clase FormatoHora.
    friend FormatoHora operator + (const FormatoHora &p1, const FormatoHora &p2);
    friend FormatoHora operator - (const FormatoHora &p1, const FormatoHora &p2);

//Metodos de la clase FormatoHora.

public:
    void validar();
    int h,m,s;
        FormatoHora();
        FormatoHora(int h, int m, int s);
//To String Method
        std::string to_String();
    };


#endif //POO_VALVARADO_A05_FORMATOHORA_H
