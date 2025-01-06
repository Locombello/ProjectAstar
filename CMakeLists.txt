cmake_minimum_required(VERSION 3.30)
project(ProjectAstar)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

add_executable(ProjectAstar main.cpp
        Game.cpp
        Game.h
)

target_link_libraries(ProjectAstar sfml-system sfml-window sfml-graphics sfml-audio sfml-network)