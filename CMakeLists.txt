cmake_minimum_required(VERSION 3.24)
project(physics)

set(CMAKE_CXX_STANDARD 20)

set(LIBRARIES
        Geometry
        Physic)

add_executable(physics src/main.cpp)

foreach(LIB ${LIBRARIES})
    add_subdirectory("libs/${LIB}")
endforeach(LIB)
target_link_libraries(physics ${LIBRARIES})
