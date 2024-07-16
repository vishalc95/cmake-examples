# Configure testing
enable_testing()

# Add test executable
add_executable(test_main test_main.cpp)

# Link libraries (example)
target_link_libraries(test_main SomeLibrary)

# Add test (example)
add_test(NAME MyTest COMMAND test_main)
