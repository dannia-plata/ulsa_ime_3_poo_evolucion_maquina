#include "Motor.h"

#include <stdexcept>

namespace planta {

Motor::Motor(double velocidadMaxRpm)
    : velocidadMaxRpm(velocidadMaxRpm), velocidadActualRpm(0.0) {
    if (velocidadMaxRpm <= 0.0) {
        throw std::invalid_argument("Motor: la velocidad maxima debe ser positiva");
    }
}

void Motor::fijarVelocidad(double rpm) {
    if (rpm < 0.0) {
        rpm = 0.0;
    } else if (rpm > velocidadMaxRpm) {
        rpm = velocidadMaxRpm;
    }
    velocidadActualRpm = rpm;
}

double Motor::getVelocidad() const {
    return velocidadActualRpm;
}

}  // namespace planta
