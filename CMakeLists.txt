cmake_minimum_required(VERSION 3.9)
project(workspace_c__)

set(CMAKE_CXX_STANDARD 11)

add_executable(workspace_c__
        HelloWorld/src/HelloWorld.cpp
        OutputtingText/src/OutputtingText.cpp
        Variables/src/Variables.cpp)
