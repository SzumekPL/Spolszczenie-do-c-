cmake_minimum_required(VERSION 3.10)
project(Biblioteka)

set (FILES 
    example1.cpp
)

add_subdirectory(lib)
message(STATUS "\n\n -----Witaj w polskim cpp :)----- \n\n")
message(STATUS "Jesli chcesz zmienic plik ktory zostanie skompilowany to zmodyfikuj pierwszy CMakeLists\n")

add_executable(Example1 ${FILES}) #
target_link_libraries(Example1 PRIVATE SpolszczenieLib)
# C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)