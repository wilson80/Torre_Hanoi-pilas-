cmake_minimum_required(VERSION 3.27)
project(Torre_Hanoi_pilas_)

set(CMAKE_CXX_STANDARD 17)

add_executable(Torre_Hanoi_pilas_ main.cpp
#        cmake-build-debug/Pila.cpp
#        cmake-build-debug/Pila.h
        Pila.cpp
        Pila.h
        crearTorres.cpp
        crearTorres.h
        ControlJuego.cpp
        ControlJuego.h)
