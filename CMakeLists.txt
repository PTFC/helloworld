cmake_minimum_required (VERSION 2.8)
project (CMakeHelloWorld)

include_directories(hdr)

set(SOURCES src/HelloWorld.cpp src/Speaker.cpp)
#file(GLOB SOURCES "src/*.c")

add_executable(hellworld ${SOURCES})

