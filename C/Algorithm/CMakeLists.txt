cmake_minimum_required(VERSION 3.10)
project(SearchAlgorithmsProject C)

# # Add Libraries

# Specify the source files
set(SOURCE_FILES
    Src/main.c
    Src/Search_Algorithms.c
)

# Add the executable target
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
