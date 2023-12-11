/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   bubble.h
 * Author: andre
 *
 * Created on 18 de julho de 2023, 23:12
 */

#ifndef BUBBLE_H
#define BUBBLE_H

class bubble {
public:
    bubble();
    bubble(const bubble& orig);
    virtual ~bubble();
    
    int n;
    int v[10];
    void listar();
    void inicializa();
    void bubbleSort(int *v, int n);
    
private:

};

#endif /* BUBBLE_H */

