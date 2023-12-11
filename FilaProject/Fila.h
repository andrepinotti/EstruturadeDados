/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Fila.h
 * Author: andre
 *
 * Created on 11 de dezembro de 2023, 15:56
 */

#ifndef FILA_H
#define FILA_H

struct nodo{
    int elem;
    nodo *prox;
};

class Fila {
public:
    
     nodo *inicio, *fim, *aux;
   
    
    Fila();
    Fila(const Fila& orig);
    virtual ~Fila();
    
    
    bool vazio(struct nodo *campo);
    void insere(void);
    void removr(void);
    void listar(void);
    bool pesquisa(int x);
    void menu(void);
    bool pesquisar(int valor);
    
private:

};

#endif /* FILA_H */

