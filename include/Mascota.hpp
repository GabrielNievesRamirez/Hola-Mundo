
#pragma once
#include <Alimento.hpp> 

class Mascota{
    private:
        int vida;
    public:
        Mascota(){
            this->Vida =0;
        }
        Mascota(){}

        void Comer(Alimento alimento){
           this->vida += 
           alimento.ExtraerEnergia();
        } 
            alimento.ExtraerEnergia();

        }
        void Jugar(){
            this->vida -= 2;
     }
     int LeerVida(){
        return this->vida;
     }
 };
 
