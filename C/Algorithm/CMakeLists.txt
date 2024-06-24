cmake_minimum_required(VERSION 3.0.0)
project(Search_Algorithms VERSION 1.0.0)
add_subdirectory(Search_Engines)
add_executable(Search_Algorithms main.c)    

<<<<<<< HEAD
# # Add Libraries

# Specify the source files
set(SOURCE_FILES
    Src/main.c
    Src/Search_Algorithms.c
)

# Add the executable target
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
=======
target_link_libraries(Search_Algorithms PRIVATE Search_Engines)
>>>>>>> 95dc3ad881edf4f0334dfc95986fb8e22b607f62
