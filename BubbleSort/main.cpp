/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: andre
 *
 * Created on 18 de julho de 2023, 23:11
 */

#include <cstdlib>
#include <iostream>
#include "bubble.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    bubble obj;
    
    obj.inicializa();
    
    obj.bubbleSort(obj.v, obj.n);
    cout << "Vetor ordenado: ";
    obj.listar();
    
    return 0;
}

