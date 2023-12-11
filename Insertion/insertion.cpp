/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   insertion.cpp
 * Author: andre
 * 
 * Created on 26 de junho de 2023, 15:09
 */

#include "insertion.h"
#include <iostream>
#include <cstdlib>

using namespace std;

insertion::insertion() {
}

insertion::insertion(const insertion& orig) {
}

insertion::~insertion() {
}
void insertion::insercao(){
    int N = 6;
    int V[N]= {20, 12, 28, 10, 18};
    
    
    int i, j, aux;
     
    cout << "Sequência inicial: ";
    for(i = 0; i<N; i++){
        cout << V[i] << " ";
    }
    cout << endl;
    
    for(i = 1; i < N; i++){
        aux = V[i];
        for(j = i; (j > 0) && (aux < V[j - 1]); j--){
            V[j] = V[j - 1];
        }
        V[j] = aux;
    }
    cout << "Sequência ordenada: ";
    for(i = 0; i < N; i++){
        cout << V[i] << " ";
    }
 
   
}