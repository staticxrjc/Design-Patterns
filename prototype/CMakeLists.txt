cmake_minimum_required(VERSION 3.16)
project(prototype VERSION 1.0.0)
add_subdirectory(inc)
add_subdirectory(src)
include_directories(inc)

add_executable(${PROJECT_NAME} src/main.cpp)

add_library(
    prototypeMethod
    src/employeeFactory.cpp
    src/employeeEngineer.cpp
    src/employeeDeveloper.cpp
    src/employee.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE prototypeMethod)