cmake_minimum_required(VERSION 3.10)
project(MonkGame)

set(CMAKE_CXX_STANDARD 20)
find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(monk_game
    src/main.cpp
    src/gui.cpp
    src/dungeon.cpp
    src/monk.cpp
)

target_include_directories(monk_game PRIVATE include)
target_link_libraries(monk_game Qt6::Widgets)