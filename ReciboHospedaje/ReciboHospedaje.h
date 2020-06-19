//
// Created by Jerbo on 18/06/2020.
//

#ifndef PS_RECIBOHOSPEDAJE_H
#define PS_RECIBOHOSPEDAJE_H

#include "string"
#include "../Cliente/Cliente.h"
#include "../Reservacion/Reservacion.h"
#include "../Administrador/Administrador.h"
#include "../AdquirirServicio/AdquirirServicio.h"

using namespace std;

class ReciboHospedaje {
    Cliente *clientes;
    Reservacion reservacion;
    Administrador administrador;
    AdquirirServicio *adquirirServicio;
public:
    virtual ~ReciboHospedaje();

    ReciboHospedaje();

    Cliente *getClientes() const;

    void setClientes(Cliente *clientes);

    const Reservacion &getReservacion() const;

    void setReservacion(const Reservacion &reservacion);

    const Administrador &getAdministrador() const;

    void setAdministrador(const Administrador &administrador);

    AdquirirServicio *getAdquirirServicio() const;

    void setAdquirirServicio(AdquirirServicio *adquirirServicio);

};


#endif //PS_RECIBOHOSPEDAJE_H
