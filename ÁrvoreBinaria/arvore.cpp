/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   arvore.cpp
 * Author: andre
 * 
 * Created on 11 de dezembro de 2023, 16:22
 */

#include "arvore.h"
#include "no.h"
#include <iostream>
#include <cstdlib>


using namespace std;


arvore::arvore() {
}

arvore::arvore(const arvore& orig) {
}

arvore::~arvore() {
}

//por recursividade
no* arvore::insere(no *arvore, int valor){
    if(arvore == NULL){
        arvore = new no;
        arvore->esquerda = NULL;
        arvore->direita = NULL;
        arvore->valor = valor;
    }
    else if(valor < arvore->valor ){
        arvore->esquerda = insere (arvore->esquerda ,valor);
    }
        else {
        arvore->direita = insere(arvore->direita, valor);
        }
        return(arvore);


}
//sem recursividade
/*
void arvore::insere(int valor){

    no *tmp = this->raiz;
    no *ant = NULL;
    while(tmp != NULL){
        ant = tmp;
        if(tmp->valor < valor){
            tmp = tmp->direita;

        }
        else
            tmp= tmp->esquerda;

    }
    if(this->Vazio()){
        this->raiz = new no(valor);
    }
    else if(ant->valor < valor){
        ant->direita = new no(valor);
    }
    else {
        ant->esquerda = new no(valor);
    }
}                    
*/

void arvore::preorder(no *raiz) {

    if(raiz != NULL){
        preorder(raiz->esquerda);
        cout<< raiz->valor << " " ;
        preorder(raiz->direita);

    }

}


bool arvore::Vazio(){

    return this->raiz == NULL;
}
