/* 
 * File:   Bird.h
 * Author: klineluk
 *
 * Created on February 17, 2018, 11:27 AM
 */

#ifndef BIRD_H
#define	BIRD_H

#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

#include "Pet.h"

class Bird: public Pet {
protected:
    bool nocturnal;
public:    
    Bird() {
        nocturnal = false;
    }
    Bird( string n, string t, float p, int w, bool nt) : Pet(n, t, p, w), nocturnal(nt) {}
    virtual ~Bird() {}
    Bird(const Bird& b){
        if(this != &b){
            name = b.name;
            type = b.type;
            weight = b.weight;            
            price = b.price;
            nocturnal = b.nocturnal;
        }
    }
    virtual Bird& operator=(const Bird& b){
        if (this != &b) {
            name = b.name;
            type = b.type;
            weight = b.weight;            
            price = b.price;
            nocturnal = b.nocturnal;
        }
        return *this;
    }
    
    bool getNocturnal() {
        return nocturnal;
    }
    
    virtual void print() const {
        cout<<setw(8)<<left<<"Name:"<<setw(8)<<left<<name<<setw(8)<<left<<"Type:";
        cout<<setw(10)<<left<<type<<setw(10)<<left<<"Weight:"<<setw(4)<<left<<weight;
        cout<<setw(10)<<left<<"Price:"<<setw(8)<<setprecision(2)<<fixed<<left<<price;
        cout<<setw(12)<<left<<"Nocturnal:"<<setw(8)<<left<<boolalpha<<nocturnal<<endl;
    }
};

#endif	/* BIRD_H */

