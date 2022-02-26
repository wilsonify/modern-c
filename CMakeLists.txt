cmake_minimum_required(VERSION 3.14)
project(modern-c-examples LANGUAGES Fortran C CXX)
set(CMAKE_CXX_STANDARD 17) # GoogleTest requires at least C++11
set(CMAKE_Fortran_Compiler gfortran)

SET(CMAKE_CXX_FLAGS="-g -O0 -Wall -W -Wshadow -Wunused-variable -Wunused-parameter -Wunused-function -Wunused -Wno-system-headers -Wno-deprecated -Woverloaded-virtual -Wwrite-strings -fprofile-arcs -ftest-coverage")
SET(CMAKE_C_FLAGS="-g -O0 -Wall -W -fprofile-arcs -ftest-coverage")
SET(CMAKE_SHARED_LINKER_FLAGS="-fprofile-arcs -ftest-coverage")
SET(CMAKE_EXE_LINKER_FLAGS="-fprofile-arcs -ftest-coverage")

#build the test runner
include_directories(external/googletest/googletest/include)
add_subdirectory(external/googletest)
link_directories(external/googletest/build/lib)

############################ 00-encounter ####################################

# build a shared library
include_directories(src/00-encounter/starter)
add_library(starter SHARED src/00-encounter/starter/starter.c)
link_directories(${CMAKE_CURRENT_BINARY_DIR})

# build an executable
add_executable(getting-started src/00-encounter/getting-started.c)
target_link_libraries(getting-started starter)

# build a test
add_executable(test-getting-started tests/test-00-encounter/test-getting-started.cpp)
target_link_libraries(test-getting-started gtest gtest_main starter)

############################ 01-Acquaintance ####################################

# build a shared library
include_directories(src/01-Acquaintance/acquaintance)
add_library(acquaintance SHARED src/01-Acquaintance/acquaintance/acquaintance.c)
link_directories(${CMAKE_CURRENT_BINARY_DIR})

# build a test
add_executable(test-euclid tests/test-01-acquaintance/test-euclid.cpp)
target_link_libraries(test-euclid gtest gtest_main acquaintance)

############################ 02-cognition ####################################

# build a shared library
include_directories(src/02-cognition/cognition)
FILE(GLOB SOURCES src/02-cognition/cognition/*.c)
add_library(cognition SHARED ${SOURCES})
link_directories(${CMAKE_CURRENT_BINARY_DIR})

# build a test
add_executable(test-circular tests/test-02-cognition/test-circular.cpp)
target_link_libraries(test-circular gtest gtest_main cognition)

############################ 03-experience ####################################

# build a shared library
include_directories(src/03-experience/experience)
FILE(GLOB SOURCES src/03-experience/experience/*.c)
add_library(experience SHARED ${SOURCES})
link_directories(${CMAKE_CURRENT_BINARY_DIR})

# build a test
add_executable(test-B9 tests/test-03-experience/test-B9.cpp)
target_link_libraries(test-B9 gtest gtest_main experience)

# build a test
add_executable(test-sighandler tests/test-03-experience/test-sighandler.cpp)
target_link_libraries(test-sighandler gtest gtest_main experience)


############################ 04-extra ####################################

# build a test
add_executable(test-anonymous tests/test-04-extra/test-anonymous.cpp)
target_link_libraries(test-anonymous gtest gtest_main)

############################ run the tests ####################################

enable_testing()
add_test(run-getting-started getting-started)
add_test(run-test-getting-started test-getting-started)
add_test(run-test-euclid test-euclid)
add_test(run-test-circular test-circular)
add_test(run-test-B9 test-B9)
add_test(run-test-anonymous test-anonymous)
