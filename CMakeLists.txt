cmake_minimum_required(VERSION 4.0)
project(p_tree C)

set(CMAKE_C_STANDARD 11)

add_executable(p_tree main.c
        config.h
        ordenacao.c
        ordenacao.h
        arvore.c
        arvore.h
)
