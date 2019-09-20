cmake_minimum_required(VERSION 3.13)

add_executable(blink blink.c)
target_link_libraries(blink bcm2835)
