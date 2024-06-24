
add_library(Search_Engines
Src/binary_search.c
Src/jump_search.c 
Src/linear_search.c 
Src/interpolation_search.c)

target_include_directories(Search_Engines PUBLIC Inc)


