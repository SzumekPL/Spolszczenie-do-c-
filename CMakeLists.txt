cmake_minimum_required(VERSION 3.10)
project(Biblioteka)

set(FILE
    example1.cpp
)

add_subdirectory(lib)
message(STATUS "\n\n -----Witaj w polskim cpp :)----- \n\n")
message(STATUS "Jesli chcesz zmienic plik ktory zostanie skompilowany to zmodyfikuj pierwszy CMakeLists\n")
message(STATUS "Nazwa pliku .exe to Main jak cos ;)\n")
add_executable(Main ${FILE})
target_link_libraries(Main PRIVATE SpolszczenieLib)