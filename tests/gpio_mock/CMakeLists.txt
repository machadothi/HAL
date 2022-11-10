include_directories(${PROJECT_SOURCE_DIR}/../Interfaces)
include_directories(${PROJECT_SOURCE_DIR}/../mocks/gpio)

link_directories(${PROJECT_SOURCE_DIR}/../mocks/gpio)

add_executable(gpio_tests main.cpp)

target_link_libraries(gpio_tests gpio_mock)

target_compile_options(gpio_tests PUBLIC -Wall -Wextra)