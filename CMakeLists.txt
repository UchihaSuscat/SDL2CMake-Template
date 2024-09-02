cmake_minimum_required(VERSION 3.5.0)
project(main VERSION 0.1.0 LANGUAGES C CXX)

set(SOURCE_DIR src)
set(INCLUDE_DIR include)

file(GLOB SOURCES ${SOURCE_DIR}/*.cpp)
file(GLOB HEADERS ${INCLUDE_DIR}/*.h)

# Include directories
include_directories(${INCLUDE_DIR})

add_executable(main ${SOURCES} ${HEADERS})

# Link libraries
target_link_libraries(main SDL2main SDL2 SDL2_image)
