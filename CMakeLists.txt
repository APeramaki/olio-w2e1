cmake_minimum_required(VERSION 3.16)

project(w2e1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(w2e1 main.cpp
    car.h car.cpp
    rectangle.h rectangle.cpp)

include(GNUInstallDirs)
install(TARGETS w2e1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
