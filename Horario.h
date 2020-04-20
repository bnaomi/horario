#pragma once
#include <iostream>
#include <stdio.h>


class Horario {
private:
    double hora = 0;
    double min = 0;
    
public:
    //construtora, mesmo nome da classe, sem retorno ou tipo.
    Horario(double hour, double minutes) {
        setHora(hour);
        setMin(minutes);
    }
    //fim da contrutora.
    double getMin() {
        return(min);
    }
    void setHora(double hour) {
        hora = hour;
    }
    void setMin(double minutes) {
        min = minutes;
    }
    double calcularIntervalo(Horario h) {
        double difhora, difmin;
        if (hora > h.hora) {
            difhora = (hora * 60) - (h.hora * 60);
            difmin = min - h.min;
            return (difmin + difhora);
        }
        if (h.hora > hora) {
            difhora = (h.hora - hora) * 60;
            difmin = h.min - min;
            return(difhora + difmin);
        }
        if (h.hora == hora) {
            if (min - h.min < 0) {
                return(h.min - min);
            }
            else
            {
                return (min - h.min);
            }
        }

        return 999;
    }
};
