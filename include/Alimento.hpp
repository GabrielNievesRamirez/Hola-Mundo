class Alimento
{
    private:
        int energia;
    public:
        Alimento( int energia) {
            this->energia =energia;
        }
        Alimento() {}
        int ExtraerEnergia(){
            return energia;
        }
};
