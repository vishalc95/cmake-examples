cmake_minimum_required(VERSION 3.5)

project(subprojects)

# Set compilers
set(CMAKE_C_COMPILER "/usr/bin/distcc")
set(CMAKE_CXX_COMPILER "/usr/bin/distcc")

# Find Threads
find_package(Threads REQUIRED)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add pthread flag
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

# Rename the target to avoid conflicts
add_executable(subbinary_exec main.cpp)

# Link libraries
target_link_libraries(subbinary_exec PRIVATE sublibrary1 sublibrary2 stdc++)

# Add subdirectories
add_subdirectory(sublibrary1)
add_subdirectory(sublibrary2)
add_subdirectory(subbinary)

# Install targets
install(TARGETS sublibrary1
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

install(TARGETS sublibrary2
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

install(TARGETS subbinary
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)
