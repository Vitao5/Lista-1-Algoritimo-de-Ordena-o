cmake_minimum_required(VERSION 4.3)
project(Lista1_ED2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lista1_ED2 main.cpp
        src/ex01-bubbleSorting.cpp
        src/ex02-selectionSort.cpp
        src/ex03-selectionSort.cpp
        src/ex04-insertionSort.cpp
        src/ex05-insertSort.cpp)
