cmake_minimum_required(VERSION 3.10)
project(Biblioteka)

set (FILES 
    example1.cpp
)

add_subdirectory(lib)
message(STATUS "\n\n -----Witaj w polskim cpp :)----- \n\n")
message(STATUS "Jesli chcesz zmienic plik ktory zostanie skompilowany to zmodyfikuj pierwszy CMakeLists\n")
# CPP 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

add_executable(Main ${FILES}) #

target_link_libraries(Main PRIVATE SpolszczenieLib)
# CPP 17
set_target_properties(Main
    PROPERTIES
    CXX_STANDARD 17
    CXX_EXTENSIONS OFF
    CXX_STANDARD_REQUIRED ON
)
