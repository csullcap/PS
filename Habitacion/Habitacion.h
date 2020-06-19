//
// Created by Jerbo on 18/06/2020.
//

#ifndef PS_HABITACION_H
#define PS_HABITACION_H
#include "string"
#include "../TipoHabitacion/TipoHabitacion.h"
#include "../Reservacion/Reservacion.h"
#include "../ReciboHospedaje/ReciboHospedaje.h"

using namespace std;

class Habitacion {
    int numHabitacion;
    int numPiso;
    TipoHabitacion tipoHabitacion;
    Reservacion *reservacion[100];
    ReciboHospedaje *reciboHospedaje[100];
public:
    int getNumHabitacion() const;

    void setNumHabitacion(int numHabitacion);

    int getNumPiso() const;

    void setNumPiso(int numPiso);

    const TipoHabitacion &getTipoHabitacion() const;

    void setTipoHabitacion(const TipoHabitacion &tipoHabitacion);

    Reservacion *const *getReservacion() const;

    ReciboHospedaje *const *getReciboHospedaje() const;

    virtual ~Habitacion();

    Habitacion(int numHabitacion, int numPiso, const TipoHabitacion &tipoHabitacion);

public:
    Habitacion();


};


#endif //PS_HABITACION_H
