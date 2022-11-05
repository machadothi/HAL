include_directories(${PROJECT_SOURCE_DIR}/../Interfaces)
include_directories(${PROJECT_SOURCE_DIR}/../mocks)

link_directories(${PROJECT_SOURCE_DIR}/../mocks)

add_executable(MainProject main.cpp)

target_link_libraries(MainProject Mocks)