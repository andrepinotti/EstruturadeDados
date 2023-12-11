/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   avl.h
 * Author: andre
 *
 * Created on 11 de dezembro de 2023, 17:40
 */

#include <cstdlib>
#include <iostream>
#include <queue>
#include <stddef.h>
#include "no.h"

#ifndef AVL_H
#define AVL_H


class avl {
public:
    avl();
    avl(const avl& orig);
    virtual ~avl();
    
      no *raiz;
       
    int calAltura(no *p);
    int bf(struct no *no);
    no* rotacaoLL(no *no);
    no* rotacaoRR(no *no);
    no* rotacaoRL(no *no);
    no* rotacaoLR(no *no);
    no* inserir(no *r,int valor);
    
    
    
    void emOrdem(no *no);
    no* apontaESQ(no* p);
    no* apontaDIR(no* p);
    
    
private:

};

#endif /* AVL_H */

