#include "LED.h"

Led::Led(uint8_t pin) // Os dois pontos mostram em qual classe o "Led" está (Led está na classe Led)
{
    pino = pin;
    estado = LOW;
    pinMode(pino, OUTPUT);
}

void Led::acender()
{
    estado = HIGH;
}

void Led::acender(uint32_t tempoLigado)
{
    estado = HIGH;
    apagarNoTempo = true;
    apagarNoMomento = millis() + tempoLigado;
}

void Led::piscar()
{   
    apagarNoTempo = false;
    estado = !estado;
}

void Led::apagar()
{
    estado = LOW;
}

void Led::alternar()
{
    estado = !estado;
}

void Led::setEstado(bool estado)
{
    this->estado = estado;
}

uint8_t Led::getPino()
{

    return pino;
}

void Led::update()
{
    digitalWrite(pino, estado);

}