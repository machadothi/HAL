cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project (HalTests)

add_subdirectory(${PROJECT_SOURCE_DIR}/../mocks ${PROJECT_SOURCE_DIR}/build/out/)
add_subdirectory(gpio_mock)
