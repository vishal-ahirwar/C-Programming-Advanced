cmake_minimum_required(VERSION 3.1)
project(window)
add_library(win STATIC
    ./src/win.c
)
add_executable(${PROJECT_NAME} ./src/main.c)
target_link_libraries(${PROJECT_NAME} win)
