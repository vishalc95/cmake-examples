cmake_minimum_required(VERSION 3.5)

project(subprojects)
# CMakeLists.txt
set(CMAKE_C_COMPILER "/usr/bin/distcc")
set(CMAKE_CXX_COMPILER "/usr/bin/distcc")

find_package(Threads REQUIRED)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

add_executable(subbinary main.cpp)
target_link_libraries(subbinary sublibrary1 sublibrary2 stdc++)


# Add sub directories
add_subdirectory(sublibrary1)
add_subdirectory(sublibrary2)
add_subdirectory(subbinary)

# Install targets for sublibrary1
install(TARGETS sublibrary1
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

# Install targets for sublibrary2
install(TARGETS sublibrary2
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

# Install targets for subbinary
install(TARGETS subbinary
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

