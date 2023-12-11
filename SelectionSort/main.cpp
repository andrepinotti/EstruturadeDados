/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: andre
 *
 * Created on 21 de julho de 2023, 10:31
 */

#include <cstdlib>
#include <iostream>
#include "selection.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    selection obj;
    
    obj.inicializa();
    
    obj.selectionSort(obj.v, obj.n);
    cout << "Vetor ordenado: ";
    obj.listar();
    
    return 0;
}

