cmake_minimum_required(VERSION 3.16)
project(builder VERSION 1.0.0)
add_subdirectory(inc)
add_subdirectory(src)
include_directories(inc)

add_executable(${PROJECT_NAME} src/main.cpp)

add_library(
    builderMethod
    src/car.cpp
    src/carBuilder.cpp
    src/carSchematic.cpp
    src/expensiveFordBuilder.cpp
    src/cheapFordBuilder.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE builderMethod)