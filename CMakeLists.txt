cmake_minimum_required(VERSION 3.26)
project(Tetris)

set(CMAKE_CXX_STANDARD 20)

add_executable(Tetris main.cpp
        include/Grid.hpp
        include/Renderer.hpp
        include/Game.hpp
        include/Pieces.hpp
        include/InputManager.hpp
        include/ScoreBoard.hpp
        include/Grid.cpp
        include/Pieces.cpp
        include/RNG.cpp
        include/RNG.hpp)
