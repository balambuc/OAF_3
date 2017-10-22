cmake_minimum_required(VERSION 3.2)
project(unit_tests)

set(CMAKE_CXX_STANDARD 11)

add_executable(unit_tests
        catch.hpp
        main.cpp
        )

target_link_libraries(unit_tests src)

add_test(NAME unit_tests COMMAND unit_tests)

add_coverage(unit_tests)


