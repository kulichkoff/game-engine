cmake_minimum_required(VERSION 3.24)
project(game-engine)

set(CMAKE_CXX_STANDARD 20)

set(LIBRARIES
        Geometry
        Physic
        Game
        )

find_package(SDL2 REQUIRED)
include_directories(game-engine ${SDL2_INCLUDE_DIRS})

file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})

add_executable(game-engine src/main.cpp)

foreach(LIB ${LIBRARIES})
    add_subdirectory("libs/${LIB}")
endforeach(LIB)
target_link_libraries(game-engine ${LIBRARIES} ${SDL2_LIBRARIES})
