cmake_minimum_required(VERSION 3.23)
project(SocketServer C)

set(CMAKE_C_STANDARD 99)



find_path(TheHeaderFile socketutil.h
        PATHS /home/masoudy/Desktop/SocketCProjects/SocketUtil)

find_library(TheLibrary
        NAMES SocketUtil
        PATHS /home/masoudy/Desktop/SocketCProjects/SocketUtil/cmake-build-debug)

add_executable(SocketServer main.c)

include_directories(${TheHeaderFile})
target_link_libraries(${PROJECT_NAME} ${TheLibrary})
