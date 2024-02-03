cmake_minimum_required(VERSION 3.27)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled Sources/main.cpp
        headers/menu.h
        headers/jeu.h
        headers/constantes.h
)
