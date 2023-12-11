/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   arvore.h
 * Author: andre
 *
 * Created on 11 de dezembro de 2023, 16:22
 */

#ifndef ARVORE_H
#define ARVORE_H

#include "no.h"

class arvore {
public:
    
    no *raiz;
    
    arvore();
    arvore(const arvore& orig);
    virtual ~arvore();
    
    no* insere(no *arvore, int valor);
    void preorder(no *raiz);
    bool Vazio();
    void insere(int valor);
    
    
private:

};

#endif /* ARVORE_H */

