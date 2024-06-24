cmake_minimum_required(VERSION 3.0.0)
project(Search_Algorithms VERSION 1.0.0)

add_subdirectory(Search_Engines)
add_executable(Search_Algorithms main.c)    

target_link_libraries(Search_Algorithms PRIVATE Search_Engines)
