/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   bubble.cpp
 * Author: andre
 * 
 * Created on 18 de julho de 2023, 23:12
 */

#include "bubble.h"
#include <iostream>

using namespace std;

bubble::bubble() {
}

bubble::bubble(const bubble& orig) {
}

bubble::~bubble() {
}

void bubble::inicializa() {
    this->n = 10;
    this->v[0] = 3;
    this->v[1] = 2;
    this->v[2] = 17;
    this->v[3] = 21;
    this->v[4] = 35;
    this->v[5] = 78;
    this->v[6] = 16;
    this->v[7] = 14;
    this->v[8] = 0;
    this->v[9] = 5;
}
void bubble::bubbleSort(int *v, int n) {
    int cont = 0, cont2 = 0;
    cout << "Bubble:\n";
    int i, continua, aux;
    do {
        continua = 0;
        for (i = 0; i < n - 1; i++) {
            cont++;
            if (v[i] > v[i + 1]) {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                continua = 1;
                listar();
                cont2++;
            }
        }
    } while (continua);

    cout << endl << "Comparações: " << cont;
    cout << endl << "Trocas: " << cont2 << endl;
}

void bubble::listar() {
    for (int i = 0; i < 10; i++) {
        cout << this->v[i] << " - ";
    }
    cout << endl;
}