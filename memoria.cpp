#include <iostream>

using namespace std;

class Enano {
private:
    float altura;
    int edad;

public:
    Enano();
};

Enano::Enano() {
    // Puedes inicializar variables miembro si es necesario
    altura = 0.0;
    edad = 0;
}

int main(int argc, char const *argv[]) {
    int i = 5;
    bool b = true;
    float f = 0.1;
    double d = 0.1;
    char c = 'a';
    Enano e;

    cout << "tamaño de tipos de datos nativos: " << endl;
    cout << "tamaño int:  " << sizeof(int) << " bytes." << endl;
    cout << "tamaño bool: " << sizeof(bool) << " bytes." << endl;
    cout << "tamaño float: " << sizeof(float) << " bytes." << endl;
    cout << "tamaño double: " << sizeof(double) << " bytes." << endl;
    cout << "tamaño char:  " << sizeof(char) << " bytes." << endl;
    cout << "tamaño Enano:  " << sizeof(Enano) << " bytes." << endl;

    cout << "Direcciones de memoria:" << endl;
    cout << "Direccion de int: " << &i << endl;
    cout << "Direccion de bool: " << &b << endl;
    cout << "Direccion de float: " << &f << endl;
    cout << "Direccion de double: " << &d << endl;
    cout << "Direccion de char: " << static_cast<void *>(&c) << endl;
    cout << "Direccion de Enano: " << &e << endl;

    return 0;
}