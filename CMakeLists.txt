cmake_minimum_required(VERSION 3.17)
project(checkMate)

set(CMAKE_CXX_STANDARD 20)

add_executable(checkMate main.cpp Board.cpp Board.h Piece.cpp Piece.h)