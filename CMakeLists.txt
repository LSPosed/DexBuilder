cmake_minimum_required(VERSION 3.4.1)
project(dex_builder)

add_definitions(-std=c++17)

set(DB_SOURCES
        dex_builder.cc
        slicer/writer.cc
        slicer/dex_ir.cc
        slicer/common.cc
        slicer/dex_format.cc
        slicer/dex_utf8.cc
        slicer/dex_bytecode.cc
        )

set(TEST_SOURCES
        dex_testcase_generator.cc
        )

add_library(${PROJECT_NAME} STATIC ${DB_SOURCES})
target_link_libraries(${PROJECT_NAME} z)
target_include_directories(${PROJECT_NAME} PRIVATE slicer)
