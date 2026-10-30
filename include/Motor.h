#ifndef MOTOR_H
#define MOTOR_H

namespace planta {

// Motor con velocidad limitada entre 0 y su maximo.
class Motor {
private:
    double velocidadMaxRpm;
    double velocidadActualRpm;

public:
    explicit Motor(double velocidadMaxRpm);

    void fijarVelocidad(double rpm);
    double getVelocidad() const;
};

}  // namespace planta

#endif
