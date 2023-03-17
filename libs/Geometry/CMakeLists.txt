set(LIBRARY_NAME Geometry)

project(GeometryLibrary)

set(LIBRARY_HEADERS
        include/${LIBRARY_NAME}/vector-2d.h
        )

set(LIBRARY_SOURCE
        src/vector-2d.cpp
        )

add_library(${LIBRARY_NAME} STATIC
        ${LIBRARY_HEADERS}
        ${LIBRARY_SOURCE}
        )

target_include_directories(${LIBRARY_NAME} PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/${LIBRARY_NAME}}>
        $<INSTALL_INTERFACE:include/${LIBRARY_NAME}>
        )

target_include_directories(${LIBRARY_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
        )
