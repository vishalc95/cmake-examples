# Add all source files in the src directory
file(GLOB SOURCES "*.cpp")

# Create executable
add_executable(SimpleCMakeProject ${SOURCES})

# Link libraries (example)
target_link_libraries(SimpleCMakeProject SomeLibrary)
