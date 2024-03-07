
#pragma once
#include <Alimento.hpp> 

class Mascota{
    private:
        int vida;
    public:
        Mascota(){
            this->Vida =0;
        }

        void Comer(Alimento alimento){
           this->vida += 
           alimento.ExtraerEnergia();
        } 

        void Jugar(){
            this->vida -= 2;
     }
     int LeerVida(){
        return this->vida;
     }
 };
 
