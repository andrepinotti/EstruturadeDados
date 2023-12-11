/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   no.h
 * Author: andre
 *
 * Created on 11 de dezembro de 2023, 16:21
 */

#ifndef NO_H
#define NO_H

class no {
public:
    no();
    no(int valor);
    virtual ~no();
    
    int valor;
    no *direita, *esquerda;
    
private:

};

#endif /* NO_H */

