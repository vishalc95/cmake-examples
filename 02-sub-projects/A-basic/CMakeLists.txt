cmake_minimum_required(VERSION 3.5)

project(subprojects)

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

