/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   selection.h
 * Author: andre
 *
 * Created on 21 de julho de 2023, 10:36
 */

#ifndef SELECTION_H
#define SELECTION_H

class selection {
public:
    selection();
    selection(const selection& orig);
    virtual ~selection();
    
    int n;
    int v[10];
    void inicializa();
    void selectionSort(int *v, int n);
   
    void listar();
    
private:

};

#endif /* SELECTION_H */

