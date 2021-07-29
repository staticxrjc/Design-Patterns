cmake_minimum_required(VERSION 3.16)
project(factory VERSION 1.0.0)
add_subdirectory(inc)
add_subdirectory(src)
include_directories(inc)

add_executable(${PROJECT_NAME} src/main.cpp)

add_library(
    factoryMethod
    src/spaceshipFactory.cpp
    src/spaceship.cpp
    src/alienSpaceshipFactory.cpp
    src/alienFriendlySpaceship.cpp
    src/alienHostileSpaceship.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE factoryMethod)