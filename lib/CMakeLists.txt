set(SRC
    src/spolszczenie.h
    src/spolszczenie.cpp
)
add_library(SpolszczenieLib STATIC ${SRC})
target_include_directories(SpolszczenieLib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")