cmake_minimum_required (VERSION 2.8)
project (CMakeHelloWorld)

include_directories(hdr)

set(SOURCES src/HelloWorld.cpp src/Speaker.cpp)
#file(GLOB SOURCES "src/*.c")

find_package( OpenCV REQUIRED )

add_executable(helloworld ${SOURCES})

#install(TARGETS hellworld DESTINATION bin)

target_link_libraries( helloworld ${OpenCV_LIBS} )
