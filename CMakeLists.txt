cmake_minimum_required(VERSION 2.8)

project(vidcpp)

include_directories(include)

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_library(vidcpp STATIC ${SOURCES})
