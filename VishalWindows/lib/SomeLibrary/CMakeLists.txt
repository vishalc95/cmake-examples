# Example external library (SomeLibrary) configuration
project(SomeLibrary)

# Define library
add_library(SomeLibrary
    src/SomeLibrary.cpp
)

target_include_directories(SomeLibrary PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
