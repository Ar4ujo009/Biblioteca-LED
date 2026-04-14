#ifndef LED_h
#define LED_h

#include <Arduino.h>

class Led   //CLASSE QUE DESCREVE O QUE O LED PODE FAZER
{
    private:
    uint8_t pino;
    bool estado;
    bool apagarNoTempo;
    uint32_t apagarNoMomento;

    public:
    Led(uint8_t pin); //MÉTODO CONSTRUTOR

    void acender();
    void acender(uint32_t tempoLigado);

    void apagar();

    void piscar();
    void piscar(float freq);
    void piscar(float freq, uint16_t repeticoes);

    void alternar();

    void setEstado(bool estado);


    uint8_t getPino();
    
    void update();
};


#endif