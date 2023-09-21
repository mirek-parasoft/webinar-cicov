# CMake requires to set its minimum required version
cmake_minimum_required(VERSION 3.21)

# Set the project name, enabling its required languages (e.g. ASM, C and/or CXX)   
project(simpleProject LANGUAGES C CXX)

if(CPPTEST_COVERAGE)
  include(cmake/cpptest-coverage.cmake)
endif()

add_subdirectory(CppUTest/src/CppUTest)

# Add a executable target named "hello-world"
add_executable(hello-world
   # Target sources
   main.cxx
   mainTestSuite.cxx
   )

target_link_libraries(hello-world PRIVATE CppUTest)

# Set the target's compiler options
target_compile_options(hello-world PRIVATE -I${CMAKE_SOURCE_DIR} -I$ENV{CPPTEST_HOME}/runtime/include --cpu=Cortex-M4 --fpu=None --dlib_config full)   
   
# Set the target's linker options
target_link_options(hello-world PRIVATE --semihosting --config ${CMAKE_SOURCE_DIR}/stm32f407xG.icf --map linker.map)

