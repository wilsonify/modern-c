cmake_minimum_required(VERSION 3.14)
project(modern-c-examples LANGUAGES Fortran C CXX)
set(CMAKE_CXX_STANDARD 11) # GoogleTest requires at least C++11
set(CMAKE_Fortran_Compiler gfortran)

include_directories(external/googletest/googletest/include)
add_subdirectory(external/googletest)
link_directories(external/googletest/build/lib)

add_subdirectory(tests/test-00-encounter)
