/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   no.h
 * Author: aluno
 *
 * Created on 15 de fevereiro de 2023, 09:35
 */

#ifndef NO_H
#define NO_H

class no {
public:
    no();
    no(int no);
    virtual ~no();
    int valor;
    no *direito,*esquerdo;
private:

};

#endif /* NO_H */

