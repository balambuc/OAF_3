set(CMAKE_CXX_STANDARD 11)

add_library(src STATIC
        headers/Animal.h
        headers/Simulator.h
        Animal.cpp
        Simulator.cpp
        )

target_include_directories(src PUBLIC headers)

find_package(codecov)
add_coverage(src)