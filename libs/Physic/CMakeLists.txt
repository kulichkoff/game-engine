set(LIBRARY_NAME Physic)

project(PhysicLibrary)

set(LIBRARY_HEADERS
        include/${LIBRARY_NAME}/rigidbody.h
        )

set(LIBRARY_SOURCE
        src/rigidbody.cpp
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

target_link_libraries(Physic PRIVATE Geometry)
