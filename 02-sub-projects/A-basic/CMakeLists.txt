cmake_minimum_required(VERSION 3.5)

project(subprojects)

# Set the compilers to distcc
set(CMAKE_C_COMPILER "/usr/bin/distcc")
set(CMAKE_CXX_COMPILER "/usr/bin/distcc")

# Find required Threads package
find_package(Threads REQUIRED)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set compiler flags for pthread
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

# Define subbinary executable
add_executable(subbinary main.cpp)

# Link subbinary with sublibraries and stdc++
target_link_libraries(subbinary sublibrary1 sublibrary2 stdc++)

# Add subdirectories for sublibraries
add_subdirectory(sublibrary1)
add_subdirectory(sublibrary2)

# Install targets for sublibraries and subbinary
install(TARGETS subbinary sublibrary1 sublibrary2
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)
