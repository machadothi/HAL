include_directories(${PROJECT_SOURCE_DIR}/../Interfaces)

add_library(gpio_mock gpio_mock.cpp)

target_compile_options(gpio_mock PUBLIC -Wall -Wextra)