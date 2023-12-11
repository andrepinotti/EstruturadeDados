/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   no.h
 * Author: andre
 *
 * Created on 11 de dezembro de 2023, 17:40
 */

#ifndef NO_H
#define NO_H

class no {
public:
    no();
    no(const no& orig);
    virtual ~no();
    int altura;
    int valor;  
    no *direito, *esquerdo;
private:

};

#endif /* NO_H */

