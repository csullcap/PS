cmake_minimum_required(VERSION 3.16)
project(PS)

set(CMAKE_CXX_STANDARD 14)

add_executable(PS main.cpp
        Servicio/Servicio.cpp Servicio/Servicio.h
        Habitacion/Habitacion.cpp Habitacion/Habitacion.h
        Hotel/Hotel.cpp Hotel/Hotel.h
        Usuario/Usuario.cpp Usuario/Usuario.h
        )