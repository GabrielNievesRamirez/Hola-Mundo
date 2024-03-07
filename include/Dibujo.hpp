#pragma once
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Dibujo
{
    private:
        


    public:
     Dibujo(string filePath)
     {
        file.open(filePath);
     }
     Dibujo(){
        file.close();
     }
     void Dibujar()
     {
         string line;
         while (getline(file, line))
         {

             cout << line << endl;
         }
     }
};
