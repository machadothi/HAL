include_directories(${PROJECT_SOURCE_DIR}/../Interfaces)
include_directories(${PROJECT_SOURCE_DIR}/../mocks/gpio)

link_directories(${PROJECT_SOURCE_DIR}/../mocks/gpio)

add_executable(MainProject main.cpp)

target_link_libraries(MainProject Mocks)