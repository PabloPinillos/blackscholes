cmake_minimum_required(VERSION 3.28)
project(BlackScholesMerton LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

add_executable(Blackscholes src/main.cpp)
target_compile_features(Blackscholes PRIVATE cxx_std_17)
install(TARGETS Blackscholes DESTINATION bin)