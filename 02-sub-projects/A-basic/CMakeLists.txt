cmake_minimum_required(VERSION 3.5)

project(subprojects)

# Add sub directories
add_subdirectory(sublibrary1)
add_subdirectory(sublibrary2)
add_subdirectory(subbinary)

# Install targets
install(TARGETS sublibrary1 sublibrary2 subbinary
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)
