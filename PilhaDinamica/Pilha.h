/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Pilha.h
 * Author: andre
 *
 * Created on 15 de novembro de 2022, 14:13
 */

#ifndef PILHA_H
#define PILHA_H

class Pilha {
public:
    struct nodo {
        int elem;
        struct nodo *ant; //O próximo elemento a ser chamado tem que ser do tipo nodo, no caso *prox armazena recebe o endereco de proximo nodo
    } *topo, *aux;

    
    Pilha();
    Pilha(const Pilha& orig);
    virtual ~Pilha();
    
    bool vazio(struct nodo *campo);
    void insere(void);
    void removr(void);
    void listar(void);
    void menu(void);
    
private:

};

#endif /* PILHA_H */

