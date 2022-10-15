add_executable(chapter_1 src/chapter_1.cpp)
target_include_directories(chapter_1 PUBLIC inc)
target_compile_options(chapter_1 PRIVATE -std=c++20 -W -Werror -Wall -Wpedantic)