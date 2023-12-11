/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   selection.cpp
 * Author: andre
 * 
 * Created on 21 de julho de 2023, 10:36
 */

#include "selection.h"
#include <iostream>

using namespace std;

selection::selection() {
}

selection::selection(const selection& orig) {
}

selection::~selection() {
}

void selection::inicializa() {
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

void selection::selectionSort(int *v, int n) {
    int cont = 0, cont2 = 0;
    cout << "Selection:\n";
    int i, j, menor, troca;
    for (i = 0; i < n - 1; i++) {
        menor = i;
        for (j = i + 1; j < n; j++) {
            if (v[j] < v[menor]) {
                menor = j;

            }
            cont++;
        }
        if (i != menor) {
            troca = v[i];
            v[i] = v[menor];
            v[menor] = troca;
            this->listar();
            cont2++;
        }
    }
    cout << endl << "Comparações: " << cont;
    cout << endl << "\nTrocas: " << cont2 << "\n";
}

void selection::listar() {
    for (int i = 0; i < 10; i++) {
        cout << this->v[i] << " - ";
    }
    cout << endl;
}