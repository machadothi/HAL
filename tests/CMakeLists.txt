cmake_minimum_required(VERSION 2.8.9)
project (HalTests)

add_subdirectory(${PROJECT_SOURCE_DIR}/../mocks ${PROJECT_SOURCE_DIR}/build/out/)
add_subdirectory(gpio_mock)
