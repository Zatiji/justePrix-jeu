cmake_minimum_required(VERSION 3.27)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled justePrix-game/Sources/main.cpp
        justePrix-game/headers/menu.h
        justePrix-game/headers/jeu.h
        justePrix-game/headers/constantes.h
)
