/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Pilha.cpp
 * Author: andre
 * 
 * Created on 15 de novembro de 2022, 14:13
 */

#include "Pilha.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Pilha::Pilha() {
}

Pilha::Pilha(const Pilha& orig) {
}

Pilha::~Pilha() {
}

bool Pilha::vazio(struct nodo *campo) {

    if (campo == NULL)
        return true;
    else
        return false;
}

void Pilha::insere(void) {
    int x;

    cout << "\nEntre com o numero a inserir: ";
    cin>>x;
this->aux = (struct nodo *) malloc(sizeof (aux));
    this->aux->elem = x;
    this->aux->ant = this->topo;
    this->topo = this->aux;

    cout << this->aux << "\n";
    cout << this->topo << "\n";
    cout << this->aux->ant << "\n";
    cout << this->topo << "\n";
    cout << "\nElemento inserido!\n\n";
}

void Pilha::removr(void) {
    if (!vazio(this->topo)) {
        this->aux = this->topo;
        this->topo = this->topo->ant;
        free(this->aux);
        cout << "\nRemovido com sucesso!\n\n";
    }
}
void Pilha::listar(void) {

    nodo *p;
    p = this->topo;
    while (!vazio(p->ant)) {
        cout << "\nITEM " << p->elem;
        p = p->ant;
    }
    cout << "\nITEM " << p->elem << "\n\n";


}

void Pilha::menu(void) {
    int op, sair = 0;

    topo = NULL;
    while (sair == 0) {
        cout << "1 -> Insere na pilha\n2 -> Remove da pilha\n";
        cout << "3 -> Listar pilha\n4 -> Sair da pilha\n";
        cout << "\nDigite uma opção: ";
        cin>>op;
        switch (op) {
            case 1: insere();
                break;
            case 2: removr();
                break;
            case 3: listar();
                break;
            case 4: sair = 1;
                break;
            default:
                cout << "Opção invalida! \n";
                break;
        }

    }
}