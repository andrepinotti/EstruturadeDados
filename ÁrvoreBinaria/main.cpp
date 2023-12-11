/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: andre
 *
 * Created on 11 de dezembro de 2023, 16:21
 */

#include <cstdlib>
#include "arvore.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

       arvore *obj = new arvore();
    //recursivo
    obj->raiz = obj->insere(obj->raiz, 10);
                obj->insere(obj->raiz, 12);
                obj->insere(obj->raiz, 8);
                ;
    obj->preorder(obj->raiz);
    //não recursivo 

    
    
    return 0;
}

