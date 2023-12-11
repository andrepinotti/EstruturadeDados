/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: andre
 *
 * Created on 11 de dezembro de 2023, 17:39
 */

#include <cstdlib>
#include <iostream>
#include <queue>
#include "avl.h"
#include <stddef.h>
#include "no.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    avl *obj = new avl();
    int opcao,valor;

    do{
        cout<<"\n1.Imprimir Árvore";
        cout<<"\n2.inserir Elemento";
        cout<<"\n0.Sair\n";
        cout<<"\nEscolha: ";

        cin>>opcao;

        switch(opcao){
        case 1:
            obj->emOrdem(obj->raiz);
            break;
                  
        case 2:
            cout<<"\nDigite Valor: ";
            cin>>valor;
            obj->raiz = obj->inserir(obj->raiz, valor);
            break;          
        case 0:
            break;
        }

     }while(opcao!=0);
    
    
    return 0;
}

