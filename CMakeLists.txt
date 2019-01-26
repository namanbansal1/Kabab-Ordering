cmake_minimum_required(VERSION 3.6)
project(Kebab_Interface_master)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        "Kebab Interface/catch.hpp"
        "Kebab Interface/grill.cpp"
        "Kebab Interface/grill.h"
        "Kebab Interface/kebab.cpp"
        "Kebab Interface/kebab.h"
        "Kebab Interface/linkedlist.cpp"
        "Kebab Interface/linkedlist.h"
        "Kebab Interface/main.cpp"
        "Kebab Interface/tests.cpp")

add_executable(Kebab_Interface_master ${SOURCE_FILES})