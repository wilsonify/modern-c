cmake_minimum_required(VERSION 3.14)
project(modern-c-examples LANGUAGES Fortran C CXX)
set(CMAKE_CXX_STANDARD 11) # GoogleTest requires at least C++11
set(CMAKE_Fortran_Compiler gfortran)

include_directories(external/googletest/googletest/include)
add_subdirectory(external/googletest)
link_directories(external/googletest/build/lib)

include_directories(src/00-encounter)
add_subdirectory(src/00-encounter)
link_directories(src/00-encounter)

add_subdirectory(tests/test-00-encounter)
add_subdirectory(tests/test-01-acquaintance)
add_subdirectory(tests/test-02-cognition)
add_subdirectory(tests/test-03-experience)
add_subdirectory(tests/test-04-extra)

enable_testing()

add_test(run-test-getting-started tests/test-00-encounter/test-getting-started)
add_test(run-test-euclid tests/test-01-acquaintance/test-euclid)
add_test(run-test-circular tests/test-02-cognition/test-circular)
add_test(run-test-B9 tests/test-03-experience/test-B9)
add_test(run-test-anonymous tests/test-04-extra/test-anonymous)
