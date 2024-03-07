#pragma once
class Alimento
{
private:
        int energia;

    public:
        Alimento(int energia)
         {
            this->energia = energia;
        }
        
        int ExtraerEnergia()
        {
            return energia;
        }
};
