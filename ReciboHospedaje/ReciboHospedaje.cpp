//
// Created by Jerbo on 18/06/2020.
//

#include "ReciboHospedaje.h"

ReciboHospedaje::ReciboHospedaje() {}

ReciboHospedaje::~ReciboHospedaje() {

}

Cliente *ReciboHospedaje::getClientes() const {
    return clientes;
}

void ReciboHospedaje::setClientes(Cliente *clientes) {
    ReciboHospedaje::clientes = clientes;
}

const Reservacion &ReciboHospedaje::getReservacion() const {
    return reservacion;
}

void ReciboHospedaje::setReservacion(const Reservacion &reservacion) {
    ReciboHospedaje::reservacion = reservacion;
}

const Administrador &ReciboHospedaje::getAdministrador() const {
    return administrador;
}

void ReciboHospedaje::setAdministrador(const Administrador &administrador) {
    ReciboHospedaje::administrador = administrador;
}

AdquirirServicio *ReciboHospedaje::getAdquirirServicio() const {
    return adquirirServicio;
}

void ReciboHospedaje::setAdquirirServicio(AdquirirServicio *adquirirServicio) {
    ReciboHospedaje::adquirirServicio = adquirirServicio;
}
