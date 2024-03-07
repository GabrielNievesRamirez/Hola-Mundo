#include <iostream>
#include <Alimento.hpp>
#include <Mascota.hpp>
#include <Dibujo.hpp

using namespace std;

int main(int argc, char const *argv[])
{
    Mascota firulais, mascota;
    Alimento carne(10);

    firulais.Comer(carne);
    
    firulais.Jugar();
    firulais.Jugar();
    firulais.Jugar();

    cout
    <<"Vida de firulais"
    << firulais.LeerVida()
    << endl;

    Dibujo dibujo;
    dibujo.Dibujar();


    return 0;
}
 