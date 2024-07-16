cmake_minimum_required(VERSION 3.10)
project(SimpleCMakeProject VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add subdirectories
add_subdirectory(src)
add_subdirectory(lib)
add_subdirectory(test)

# Installation rules
install(FILES README.md DESTINATION .)
