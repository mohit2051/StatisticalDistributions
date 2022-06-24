cmake_minimum_required(VERSION 3.8)

project(standardNormalRandomVars  
        DESCRIPTION "Statistical distribution to generate numbers for standard normal distribution")

add_executable(standardNormalRandomVariables main.cpp src/statistics.cpp)
target_compile_features(standardNormalRandomVariables PRIVATE cxx_std_20)
target_include_directories(standardNormalRandomVariables PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)