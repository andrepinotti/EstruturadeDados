/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Fila.cpp
 * Author: andre
 * 
 * Created on 11 de dezembro de 2023, 15:56
 */

#include "Fila.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Fila::Fila() {
}

Fila::Fila(const Fila& orig) {
}

Fila::~Fila() {
}

bool Fila::vazio(struct nodo *campo) {

    if (campo == NULL)
        return false;
    else
        return true;
}


void Fila::insere(){
    int x;

    cout << "Insira um valor: ";
    cin >> x;

    if(pesquisar(x)){
        cout << "Esse valor ja existe." ;
    }
    else {
        this->aux=(struct nodo*) malloc(sizeof(aux));
        this->aux->elem=x;
        if(this->inicio==NULL)
            this->inicio=this->aux;
        else
            this->fim->prox=this->aux;
        this->fim=this->aux;

    }
/*if(!pesquisa(x)){
        this->aux = (struct nodo *)malloc(sizeof(this->aux));
        this->aux->elem = x;
    
        if(this->inicio == NULL){ //SEM PESQUISA SEQUENCIAL PARA ACHAR O NÚMERO
            this->inicio = this->aux;
        }else 
            this->fim->prox = this->aux;
    
        this->fim = this->aux;
    }else
        cout << "\nO elemento inserido já existe!\n";
     * */
}

void Fila::removr(void) {
    if (vazio(this->inicio)) {
        this->aux = this->inicio;
        this->inicio = this->inicio->prox;
        free(this->aux);
        cout << "\nRemovido com sucesso!\n\n";
    }
}

void Fila::listar(void) {
    nodo *p;
    p = this->inicio;
    while (vazio(p->prox)) {
        cout << "\nITEM " << p->elem;
        p = p->prox;
    }
    cout << "\nITEM " << p->elem << "\n\n";

}

bool Fila::pesquisa(int x) {
    nodo *p;
    p = this->inicio;
    int s;
}


void Fila::menu(void) {
    char op;
    int sair = 0;

    this->inicio = NULL;

    for (; sair == 0;) {
        cout << "1 -> Insere na fila\n2 -> Remove da fila\n";
        cout << "3 -> Listar fila\n4 -> Sair da filha\n";
        cout << "\nDigite uma opção: ";
        cin>>op;
        switch (op) {
            case '1': insere();
                break;
            case '2': removr();
                break;
            case '3': listar();
                break;
            case '4': sair = 1;
                break;
            default:
            {
                cout << "Opção invalida! \n";
                break;
            }
        }
    }
}
bool Fila::pesquisar(int valor){

    bool chave=false;
    for(this->aux=this->inicio;this->aux!=NULL; this->aux = this->aux->prox){
        if(valor == this->aux->elem){
            chave = true;
        }
    }
    return chave;
}

