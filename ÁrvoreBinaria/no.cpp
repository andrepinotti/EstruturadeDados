/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   no.cpp
 * Author: andre
 * 
 * Created on 11 de dezembro de 2023, 16:21
 */

#include "no.h"
#include <cstdlib>

#include "no.h"

no::no() {
    
    this->direita = this->esquerda = NULL;
}


no::~no() {
}


no::no(int valor) {

    this->valor = valor;
    this->direita = this->esquerda = NULL;

}
